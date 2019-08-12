#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, e;       // n are the number of vertices and e are the number of edges.
    cin >> n >> e;
    int a[n][n];    // making connections with the help of the matrix.
    memset(a,0,sizeof(a));
    bool visited[n];    // to mark the visited vertices.
    memset(visited,false,sizeof(visited));
    for(int i=0;i<e;++i){
        int s,f;
        cin>>s>>f;
        a[s][f]=1;
        a[f][s]=1;
    }
    queue<int> q;
    q.push(0);
    while(q.size()!=0){
        int s=q.front();
        cout<<s<<" ";
        visited[s]=true;
        q.pop();
        for(int i=0;i<n;++i)
            if(!visited[i] && a[s][i]==1){
                q.push(i);
                visited[i]=true;}
    }
    return 0;
}

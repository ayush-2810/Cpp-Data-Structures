#include <bits/stdc++.h>
using namespace std;
void dfs(int** a,bool visited[],int n,int s){
    cout<<s<<" ";
    visited[s]=true;
    for(int i=0;i<n;++i){
        if(!visited[i] && a[s][i]==1){
            dfs(a,visited,n,i);
        }
    }
}
int main() {
    int n, e;       // n are the number of vertices and e are the number of edges.
    cin >> n >> e;
    int** a=new int*[n];   // making connections with the help of the matrix.
    for(int i=0;i<n;++i){
        a[i]=new int[n];
        for(int j=0;j<n;++j)
            a[i][j]=0;
    }
    bool visited[n];    // to mark the visited vertices.
    memset(visited,false,sizeof(visited));
    for(int i=0;i<e;++i){
        int s,f;
        cin>>s>>f;
        a[s][f]=1;
        a[f][s]=1;
    }
    for(int i=0;i<n;++i)    // traverse every disconnected graph.
        if(!visited[i])
            dfs(a,visited,n,i);
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
class graph{
    public:
    int source;
    int dest;
    int wt;
};
int func2(int v,int parent[]){
    if(parent[v]==v)
        return v;
    return func2(parent[v],parent);
}
bool func(graph a, graph b){
    return a.wt < b.wt;
}
int main()
{
	fast
	int n,e;
	cin>>n>>e;
    graph a[e];
    for(int i=0;i<e;++i){
        cin>>a[i].source;
        cin>>a[i].dest;
        cin>>a[i].wt;
    }
    sort(a,a+e,func);
    int parent[n];
    for(int i=0;i<n;++i)
        parent[i]=i;
    int count=0,i=0;
    while(count!=n-1){
        int p1 = func2(a[i].source,parent);
        int p2 = func2(a[i].dest,parent);
        if(p1!=p2){
            if(a[i].source<a[i].dest){
                cout<<a[i].source<<" ";
                cout<<a[i].dest<<" ";
            }
            else{
                cout<<a[i].dest<<" ";
                cout<<a[i].source<<" ";
            }
            cout<<a[i].wt<<"\n";
            parent[p1]=p2;
            ++count;
            }
        ++i;
        }
	return 0;
}

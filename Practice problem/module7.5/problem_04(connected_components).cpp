#include<bits/stdc++.h>
using namespace std;
vector<int>adj[1000];

bool visited[1000];

void dfs(int u){
visited[u]=true;

for(int v:adj[u]){
    if(visited[v]) continue;
    dfs(v);
}
}

void dfs1(int u){
visited[u]=true;
cout<<u<<" ";
for(int v:adj[u]){
    if(visited[v]) continue;
    dfs1(v);
}
}
int main(){
int n,m;
cin>>n>>m;
int cc=0;
for(int i=0;i<m;i++){
    int u,v;
    cin>>u>>v;
    adj[u].push_back(v);
     adj[v].push_back(u);
}
queue<int>q;
for(int i=1;i<=n;i++){

    if(visited[i]) continue;
    dfs(i);
    cc++;

}
cout<<cc<<endl;
}

#include<bits/stdc++.h>
using namespace std;
vector<int>adj[1000];
int level[1000];
bool visited[1000];
void bfs(int s){
queue<int>q;
stack<int>st;
q.push(s);
visited[s]=true;
level[s]=0;
while(!q.empty()){
    int u=q.front();
    q.pop();
   st.push(u);
    for(int v:adj[u]){
        if(visited[v]==true) continue;
        q.push(v);
        visited[v]=true;
        level[v]=level[u]+1;
    }
}
while(!st.empty()){
    int l=st.top();
    st.pop();
    cout<<l<<" ";
}

}
int main(){
int n,m;
cin>>n>>m;
for(int i=0;i<m;i++){
        int u,v;
    cin>>u>>v;
    adj[u].push_back(v);
    adj[v].push_back(u);
}
bfs(1);
}

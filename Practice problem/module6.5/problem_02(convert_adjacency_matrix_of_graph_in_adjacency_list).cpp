#include<bits/stdc++.h>
using namespace std;
vector<int>adj[1000];
int adjmat[1000][1000];
int main(){
int n;
cin>>n;
for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
          int x;
          cin>>x;
          adjmat[i][j]=x;

    }
}
for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
     if(adjmat[i][j]==1){
        adj[i].push_back(j);
       }
}
}
for(int i=1;i<=n;i++){
    cout<<"List "<<i<<": ";
    for(int j:adj[i]){
        cout<<j<<" ";
    }
cout<<endl;
}
  return 0;
}

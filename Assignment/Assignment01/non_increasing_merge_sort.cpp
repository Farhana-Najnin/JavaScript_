//non-increasing/decreasing
#include<bits/stdc++.h>
using namespace std;
const int N=1e5+7;
int nums[N];
void merge(int l,int r,int mid){
int left_size=mid-l+1;
int L[left_size+1];
int right_size=r-mid;
int R[right_size+1];
for(int i=l,j=0;i<=mid;i++,j++)
    L[j]=nums[i];
for(int i=mid+1,j=0;i<=r;i++,j++)
    R[j]=nums[i];
L[left_size]=INT_MIN;
R[right_size]=INT_MIN;
int lp=0,rp=0;
for(int i=l;i<=r;i++){
    if(L[lp]>=R[rp]){
        nums[i]=L[lp];
        lp++;
    }
    else{
        nums[i]=R[rp];
        rp++;
    }
}
}
void mergesort(int l,int r){
if(l==r) return ;
int mid=(l+r)/2;
mergesort(l,mid);
mergesort(mid+1,r);
merge(l,r,mid);
}
int main(){
int n;
cin>>n;
for(int i=0;i<n;i++){
    cin>>nums[i];
}
mergesort(0,n-1);
for(int i=0;i<n;i++){
    cout<<nums[i]<<" ";
}
return 0;
}


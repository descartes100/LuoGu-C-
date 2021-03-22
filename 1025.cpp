#include<bits/stdc++.h>
using namespace std;
int n,k,ans=0;
void dfs(int v,int x,int step){
    if (x==n && step==k){
        //cout << v << endl;
        ans++;
        return;
    }
    else if (x>=n || step>=k) return;
    for (int i=v;i<=n-x;i++){
        if (i>0) dfs(i,x+i,step+1);
    }
}
int main(){
    cin>>n>>k;
    dfs(0,0,0);
    cout<<ans;
    return 0;
}
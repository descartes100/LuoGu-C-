#include<bits/stdc++.h>
using namespace std;
int f[1001],n;
int main(){
    cin>>n;
    f[1]=1;
    for (int i=2;i<=n;i++){
       for (int j=1;j<=i/2;j++){
           f[i]+=f[j];
       }
       f[i]++;
    }
    cout<<f[n];
    return 0;
}
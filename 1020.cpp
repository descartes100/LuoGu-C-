#include<bits/stdc++.h>
using namespace std;
int f[100009],a[100009],ans1,ans2,n=1;
int main(){
    while (cin>>a[n]) n++;
    n--;
    for (int i=n;i>0;i--){
        f[i]=1;
       for (int j=i+1;j<=n;j++)
          if (a[j]<=a[i]){
              f[i]=max(f[i],f[j]+1);
          }
       ans1=max(ans1,f[i]);
    }
    for (int i=1;i<=n;i++){
        f[i]=1;
       for (int j=1;j<i;j++)
          if (a[j]<a[i]){
              f[i]=max(f[i],f[j]+1);
          }
       ans2=max(ans2,f[i]);
    }
    cout<<ans1;
    cout << endl;
    cout << ans2;
    return 0;
}
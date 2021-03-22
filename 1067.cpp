#include<bits/stdc++.h>
using namespace std;
int n,a[109];
bool b[109]={0};
int main(){
    cin>>n;
    for (int i=0;i<=n;i++){
        cin>>a[i];
        if (a[i]<0){
            b[i]=1;
            a[i]=-a[i];
        }
    }
    if (a[0]>0){
        if (b[0]==1) cout<<"-";
        if (a[0]!=1) cout<<a[0];
        cout<<"x^"<<n;
    }
    for (int i=1;i<=n-2;i++){
        if (a[i]==0) continue;
        if (b[i]==1) cout<<"-";
        else cout<<"+";
        if (a[i]!=1) cout<<a[i];
        cout<<"x^"<<n-i;
    }
    if (a[n-1]>0){
    if (b[n-1]==1) cout<<"-";
    else cout<<"+";
    if (a[n-1]!=1) cout<<a[n-1];
    cout<<"x";
    }

    if (a[n]>0){
    if (b[n]==1) cout<<"-";
    else cout<<"+";
    cout<<a[n];
    }
    return 0;
}
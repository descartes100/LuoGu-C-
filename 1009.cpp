#include<bits/stdc++.h>
using namespace std;
int a[5009],c[5009],n,b[5009];
int main(){
    cin>>n;
    a[1]=1;
    c[1]=1;
    int l=1;
    for (int i=2;i<=n;i++){
        for (int j=1;j<=l;j++){
            b[j]+= a[j] * i;
            if (b[j]>=10){
                b[j+1]+=b[j]/10;
                b[j]=b[j]%10;
                if (b[l+1]>0) l++;
            }
        }
        for (int k=1;k<=l;k++){
            c[k]+=b[k];
            if (c[k]>=10){
                c[k+1]+=c[k]/10;
                c[k]=c[k]%10;
            }
            if (c[l+1]) l++;
        }
        for (int k = 1; k <= l;k++){
            a[k] = b[k];
            b[k] = 0;
        }
    }
    for (int i=l;i>=1;i--){
        cout<<c[i];
    }
    return 0;
}
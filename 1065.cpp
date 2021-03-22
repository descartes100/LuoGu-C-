#include<bits/stdc++.h>
using namespace std;
struct node{
    int id,cost;
}a[29][29];
bool mark[29][1000000];
int n,m,lis[409],x,tmp[29],las[29],ans;
int main(){
    cin>>m>>n;
    for (int i=1;i<=m*n;i++)
       cin>>lis[i];
    for (int i=1;i<=n;i++)
       for (int j=1;j<=m;j++){
           cin>>a[i][j].id;
       }
    for (int i=1;i<=n;i++)
       for (int j=1;j<=m;j++){
           cin>>a[i][j].cost;
       }
    for (int k=1;k<=n*m;k++){
        x=lis[k];
        tmp[x]++;
        //cout << x << " " << tmp[x] << endl;
        int id=a[x][tmp[x]].id,cost=a[x][tmp[x]].cost,s=0;
        //cout << id << " " << cost << endl;
        for (int i=las[x]+1; ;i++){
            if (!mark[id][i]) s++;
            else s=0;
            if (s==cost){
                for (int j=i-cost+1;j<=i;j++) mark[id][j]=1;
                if (i>ans) ans=i;
                las[x]=i;
                break;
            }
        }
    }
    cout<<ans;
    return 0;
}

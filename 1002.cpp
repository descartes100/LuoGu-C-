#include<bits/stdc++.h>
using namespace std;
int n,m,xx,yy,t1,t2;
long long f[30][30];
bool vis[30][30] = {0};
int dx[10]={0,-2,-2,-1,-1,1,1,2,2};
int dy[10] = {0, 1, -1, 2, -2, 2, -2, 1, -1};
int main(){
    cin>>n>>m>>xx>>yy;
    for (int i=0;i<=8;i++){
        vis[xx+dx[i]][yy+dy[i]]=1;
    }
    f[0][0]=0;
    for (int i=1;i<=24;i++)
    {
        if (!vis[i][0]) f[i][0]=1;
        else
            t1 = i;
        if (!vis[0][i]) f[0][i]=1;
        else
            t2 = i;
    }
    if (t1>0) {
        for (int i = t1; i <= 24;i++)
            f[i][0] = 0;
    }
    if (t2>0) {
        for (int i = t2; i <= 24;i++)
            f[0][i] = 0;
    }
    for (int i=1;i<=n;i++)
       for (int j=1;j<=m;j++){
           if (!vis[i-1][j]) f[i][j]+=f[i-1][j]; 
           if (!vis[i][j-1]) f[i][j]+=f[i][j-1];
           if (vis[i][j]==1)
               f[i][j] = 0;
       }
    cout << f[n][m];
    return 0;
}
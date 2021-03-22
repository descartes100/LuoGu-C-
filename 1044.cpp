#include<bits/stdc++.h>
using namespace std;
int  f[20][20],n;
int main(){
    cin >> n;
    for (int i = 1; i <= n;i++){
        f[0][i] = 1;
    }
    for (int i = 1; i <= n;i++){
        for (int j = 0; j <= n;j++){
            if (j==0){
                f[i][j] +=f[i - 1][j + 1];
            }
            else
                f[i][j] += f[i - 1][j + 1] + f[i][j - 1];
        }
    }
    cout << f[n][0];
    return 0;
}
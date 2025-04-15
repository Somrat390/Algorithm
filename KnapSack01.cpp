#include<bits/stdc++.h>
using namespace std;

int main(){
    int P[5] = {0,1,2,5,6};
    int Wt[5] = {0,2,3,4,5};
    int m = 8;
    int n = 4;
    int k[n][m];

    for(int i = 0; i <= n; i++){
        for(int w = 0; w <= m; w++){
            if(w== 0 || i == 0){
                k[i][w] = 0;
            }
            else if(Wt[i] <= w){
                k[i][w] = max(P[i]+k[i-1][w - Wt[i]], k[i-1][w]);
            }else{
                k[i][w] = k[i-1][w];
            }
        }
    }

    cout <<  k[n][m] << endl;
    int i = n, w = m;
    while(i > 0 && w > 0){
        if(k[i][w] = k[i-1][w]){
            cout << i << " = 0" << endl;
            i--;
        }else{
            cout << i << " = 1" << endl;
            i --;
            w -= Wt[i];
        }
    }
}
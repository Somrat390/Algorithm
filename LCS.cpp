#include<bits/stdc++.h>
using namespace std;

static int t[1001][1001];
int LCS(string X, string Y, int m, int n){
    if(n == 0 || m == 0){
        return 0;
    }
    if(t[m][n] != -1){
        return t[m][n];
    }
    if(X[m-1] == Y[n-1]){
        return t[m][n] = 1 + LCS(X,Y,m-1,n-1);
    }else{
        return t[m][n] = max(LCS(X,Y,m,n-1), LCS(X,Y,m-1,n));
    }

}


int main(){
    string X, Y;
    cin >> X >> Y;
    
    memset(t, -1, sizeof(t));
    int m = X.size();
    int n = Y.size();

    cout << LCS(X,Y,m,n) << endl;
}
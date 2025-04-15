#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cin >> n;
    if(n == 0)return 1;
    int current = 1;
    for(int i = 2; i <= n; i++){
        current *= i;
    }
    cout << current;

}
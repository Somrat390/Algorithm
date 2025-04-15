#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 8;
    int previous1 = 1, previous2 = 0;
    int current = -1;
    for(int i = 2; i <= n; i++){
        current = previous1 + previous2;
        previous2 = previous1;
        previous1 = current;
    }
    cout << current;

}
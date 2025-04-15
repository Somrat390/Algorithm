#include<bits/stdc++.h>
using namespace std;

bool compare(pair<int,int>P1, pair<int,int>P2){
    return double(P1.first/P1.second) >= double(P2.first/P2.second);
}


float KnapSack(vector<pair<int,int>> &Items, int W){
    sort(Items.begin(),Items.end(), compare);

    int totall = 0;
    for(int i = 0; i < Items.size(); i++){
        if(Items[i].second <= W){
            totall += Items[i].first;
            W -= Items[i].second;
        }
        else{
            totall += double(Items[i].first/Items[i].second) * W;
            break;
        }
    }

    return totall;
}
int main(){
    vector<pair<int,int>> Items = {{100,20},{60,10},{100,50},{200,50}};
    cout << KnapSack(Items, 90) << endl;
}
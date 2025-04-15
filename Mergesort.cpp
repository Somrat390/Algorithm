#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int low, int high, int mid){
    vector<int> temp;
    int left = low;
    int right = mid+1;
    while(left <= mid && right <= high){
        if(arr[left] <= arr[right]){
            temp.push_back(arr[left]);
            left++;
        }else{
            temp.push_back(arr[right]);
            right++;
        }
    }

    while(left <= mid){
        temp.push_back(arr[left]);
        left++;
    }

    while(right <= high){
        temp.push_back(arr[right]);
        right++;
    }

    for(int i = 0; i < temp.size(); i++){
        arr[low+i] = temp[i];
    }
}



void mergesort(vector<int>&arr,int low, int high){
    if(low >= high){
        return;
    }
    int mid = (low+high)/2;
    mergesort(arr,low,mid);
    mergesort(arr,mid+1, high);
    merge(arr,low,high,mid);
}


int main(){
    vector<int>arr= {1,4,2,3,6,5,2,7,9};
    mergesort(arr,0,arr.size()-1);

    for(int ele:arr){
        cout << ele << endl;
    }
}
#include<bits/stdc++.h>
using namespace std;

// Reverse an array
void rev(vector<int>&arr, int s, int e){
    if(s>=e){
        return;
    }
    int temp = arr[s];
    arr[s] = arr[e];
    arr[e] = temp;
    rev(arr,s+1,e-1);
}

int main(){
    vector<int> arr = {1,2,3,4,5};
    for(int i: arr){
        cout<<i<<" ";
    }
    cout<<endl;
    rev(arr, 0, arr.size()-1);
    for(int i: arr){
        cout<<i<<" ";
    }
    return 0;
}
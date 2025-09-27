#include<bits/stdc++.h>
using namespace std;

void revArr(int p1, int p2, int arr[]){
    if(p1 >= p2){
        return;
    }
    swap(arr[p1], arr[p2]);
    revArr(p1+1, p2-1, arr);
}

void revArrOneVar(int i, int n, int arr[]){
    if(i >= n/2){
        return;
    }
    int temp = arr[i];
    arr[i] = arr[n-i-1];
    arr[n-i-1] = temp;
    revArr(i++, n, arr);
}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    for(auto num : arr){
        cout<<num<<" ";
    }
    revArr(0, n-1, arr);
    cout<<"\n";
    for(auto num : arr){
        cout<<num<<" ";
    }
}
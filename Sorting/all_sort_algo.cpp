#include<bits/stdc++.h>
using namespace std;

void selection(int arr[], int n){
    for(int i = 0; i < n-1; i++){
        int mini = i;
        for(int j = i; j < n; j++){
            if(arr[j] < arr[mini]){
                mini = j;
            }
        }
        swap(arr[i], arr[mini]);
    }
}

void bubble(int arr[], int n){
    for(int i = 1; i < n; i++){
        for(int j = 0; j <= n - i; j++){
            if(arr[j+1] < arr[j]) swap(arr[j], arr[j+1]);
        }
    }
}

// Optimized - If the array is already sorted, then why to loop everytime, 
// so exit the loop whenever you find for a particular i, the swap 
// function was not executed

void bubble_optm(int arr[], int n){
    for(int i = 1; i < n; i++){
        bool didSwap = false;
        for(int j = 0; j <= n - i; j++){
            if(arr[j+1] < arr[j]) {
                swap(arr[j], arr[j+1]);
                didSwap = true;
            }
        }
        if(!didSwap) break; 
    }
}

void insertion(int arr[], int n){
    for(int i = 0; i < n; i++){
        int j = i;
        while(j >0 && arr[j-1] > arr[j]){
            swap(arr[j-1], arr[j]);
            j--;
        }
    }
}

void merge(){
    
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++) cin>>arr[i];
    for(auto num: arr) cout<<num<<" ";
    insertion(arr, n);
    cout<<endl;
    for(auto num: arr) cout<<num<<" ";
}
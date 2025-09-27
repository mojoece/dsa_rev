#include<bits/stdc++.h>
using namespace std;

// Reverse an array with two variables
void rev2var(vector<int>&arr, int s, int e){
    if(s>=e) return;
    swap(arr[s], arr[e]); // backtracking step to restore original array
    rev2var(arr,s+1,e-1);
}

// Reverse an array with one variable
void rev1var(vector<int>& arr, int i){
    if(i <= arr.size()-i-1) return;
    swap(arr[i], arr[arr.size()-1-i]);
    rev1var(arr, i-1);
}

bool palindrome(string &s, int i){
    if(i>=s.size()/2) return true;
    if(s[i]!=s[s.size()-i-1]) return false;
    return palindrome(s,i+1);
}

int main(){ 
    vector<int> arr = {1,2,3,4,5};
    for(int i: arr){
        cout<<i<<" ";
    }
    cout<<endl;
    // rev2var(arr, 0, arr.size()-1);
    rev1var(arr, arr.size()-1);
    for(int i: arr){
        cout<<i<<" ";
    }
    cout<<endl;
    string s;
    cin>>s;
    cout<<palindrome(s,0)<<endl;
    return 0;
}
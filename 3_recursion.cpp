#include<bits/stdc++.h>
using namespace std;

// Sum of first N natural numbers
int sum(int i, int n){
    if(i>n){
        return 0;
    }
    return i + sum(i+1,n);
}

int main(){
    int n;
    cin>>n;
    cout<<sum(1,n);
    return 0;
}
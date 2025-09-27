#include<bits/stdc++.h>
using namespace std;

unordered_map<int, long long>memo;

int fibo(int n){
    if(n <= 1) return n;
    if(memo.find(n) != memo.end()) return memo[n];
    memo[n] = fibo(n-1) + fibo(n-2);
    return memo[n];
}

int fibo_rec(int n){
    if(n <= 1) return n;
    return fibo(n-1) + fibo(n-2);
}

int main(){
    int n;
    cin>>n;
    cout<<fibo(n);
} 

// 1 1 2 3 5 8 13 21 34 55
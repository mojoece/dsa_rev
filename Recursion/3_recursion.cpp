#include<bits/stdc++.h>
using namespace std;

// Sum of first N natural numbers
int sum1(int n){
    if(n==0){
        return 0;
    }
    return n + sum1(n-1);
}
// Time complexity: O(n)
// Space complexity: O(n) (due to recursion stack)

// Sum of first N natural numbers using backtracking
int sum2(int i, int sum){
    if(i<1){
        return sum;
    }
    return sum2(i-1, sum+i);
}
// Time complexity: O(n)
// Space complexity: O(n) (due to recursion stack)

// Factorial of a number
int fact(int n){
    if(n==1) return 1;
    return n*fact(n-1);
} 
// Time complexity: O(n)
// Space complexity: O(n) (due to recursion stack)

int main(){
    int n;
    cin>>n;
    cout<<sum1(n)<<endl;
    cout<<sum2(n,0)<<endl;
    cout<<fact(n)<<endl;
    return 0;
}
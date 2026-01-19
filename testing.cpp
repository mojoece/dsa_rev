#include<bits/stdc++.h>
using namespace std;

// Print a name N times
void printName(int n, string name){
    if(n==0) return;
    cout<<name<<endl;
    printName(n-1, name);
}

// Print numbers from 1 to N
void print1ton(int i, int n){
    if(i>n) return;
    cout<<i<<endl;
    print1ton(i+1, n);
}

// Print numbers from N to 1
void printnto1(int n){
    if(n==0) return;
    cout<<n<<endl;
    printnto1(n-1);
}

// Print numbers from 1 to N using backtracking
void print1tonbacktrack(int i, int n){
    if(i < 1) return;
    print1tonbacktrack(i-1, n);
    cout<<i<<endl;
}

// Print numbers from N to 1 using backtracking
void printnto1backtrack(int i, int n){
    if(i > n) return;
    printnto1backtrack(i+1, n);
    cout<<i<<endl;
}

int main(){
    int n;
    cin>>n;
    printName(n, "mojo");
    print1ton(1,n);
    printnto1(n);
    print1tonbacktrack(n,n);
    printnto1backtrack(1, n);
    return 0;
}
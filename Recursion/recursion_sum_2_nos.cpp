#include<bits/stdc++.h>
using namespace std;

// functional way
int sum(int i, int sumN){
    if(i < 1){
        return 0;
    }
    sumN = sum(i-1, sumN);
    sumN += i;
    return sumN;
}

// Parametrized Way
void sumParam(int i, int sum){
    if(i < 1){
        cout<<sum;
        return;
    }
    sumParam(i - 1, sum+i);
}

int sumFast(int i){
    if(i == 0){
        return 0;
    }
    return i + sumFast(i-1);
}

int main(){
    cout<<sum(10, 0)<<"\n";
    sumParam(10, 0);
    cout<<"\n";
    cout<<sumFast(10);
}   
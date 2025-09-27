#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(string str, int p1, int p2){
    if(p1>=p2){
        return true;
    }
    if(str[p1]!=str[p2]){
        return false;
    }
    return checkPalindrome(str, p1+1, p2-1);
}

int main(){
    string str = "123321";
    cout<<checkPalindrome(str, 0, 5);
}
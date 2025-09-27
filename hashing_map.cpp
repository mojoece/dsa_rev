#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    map<int, int> mpp;
    for(int i = 0; i < n; i++){
        cin>>arr[i];
        mpp[arr[i]]++;
    }

    // Iterate in the map
    for(auto it : mpp){
        cout<< it.first << "->" << it.second << endl;
    }

    int q;
    cin>>q;
    while(q--){
        int num;
        cin>>num;
        cout<<mpp[num]<<endl;
    }

    return 0;
}
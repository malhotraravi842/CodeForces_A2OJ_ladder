#include<bits/stdc++.h>
using namespace std;

string permutation(int arr[], int n) {
    map<int, int> m;
    for(int i=0;i<n;i++) {
        m[arr[i]]++;
    }

    int count = 0;
    for(auto x: m) {
        if(x.second>1) {
            count += x.second;
            count--;
        }
    }

    if((n-count) >= count-1) {
        return "YES";
    }else {
        return "NO";
    }
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }

    cout<<permutation(arr, n);
    
    return 0;
}
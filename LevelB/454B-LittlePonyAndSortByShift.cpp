#include<bits/stdc++.h>
using namespace std;

int shiftCount(int arr[], int n) {
    int v = 0, s;
    for(int i=0;i<n-1;i++) {
        if(arr[i] > arr[i+1]) {
            s = i;
            v++;
        }
    }

    if(arr[n-1] > arr[0]) {
        s = n-1;
        v++;
    }

    if(v==0) {
        return 0;
    }

    if(v>1) {
        return -1;
    }
        
    return n-1-s;
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }

    cout<<shiftCount(arr, n)<<endl;

    return 0;
}
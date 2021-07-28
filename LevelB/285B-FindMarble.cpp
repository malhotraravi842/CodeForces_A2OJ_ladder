#include<bits/stdc++.h>
using namespace std;

int countShuffling(int arr[], int n, int s, int t) {
    if(s==t) {
        return 0;
    }

    int pos = arr[s-1];
    int count = 1;
    while(pos != t) {
        if(pos == s) {
            return -1;
        }
        pos = arr[pos-1];
        count++;
    }

    return count;
}

int main() {
    int n, s, t;
    cin>>n>>s>>t;

    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }

    cout<<countShuffling(arr, n, s, t);

    return 0;
}
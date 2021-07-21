#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }

    int minm = INT_MAX, maxm = INT_MIN;
    int minI = -1, maxI = -1;
    for(int i=0;i<n;i++) {
        if(arr[i]<=minm) {
            minm = arr[i];
            minI = i;
        }
        if(arr[i]>maxm) {
            maxm = arr[i];
            maxI = i;
        }
    }

    int count = 0;

    if(arr[0] != maxm) {
        count += maxI;
    }

    if(arr[n-1] != minm) {
        count += (n-minI - 1);
    }

    if(maxI > minI) {
        count--;
    }

    cout<<count<<endl;

    return 0;

}
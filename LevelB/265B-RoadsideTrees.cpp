#include<bits/stdc++.h>
using namespace std;

int minimalTime(int arr[], int n) {
    int total_time = arr[0] + 1;
    for(int i=1;i<n;i++) {
        if(arr[i-1] <= arr[i]) {
            total_time += arr[i] - arr[i-1] + 2;
        }else {
            total_time += arr[i-1] - arr[i] + 2;
        }
    }

    return total_time;
}

int main() {
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }

    cout<<minimalTime(arr, n);

    return 0;

}
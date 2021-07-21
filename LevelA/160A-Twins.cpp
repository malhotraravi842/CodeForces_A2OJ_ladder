#include<bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin>>n;
    int arr[n];
    int sum = 0;
    for(int i=0;i<n;i++) {
        cin>>arr[i];
        sum += arr[i];
    }

    sort(arr, arr+n);
    int sum1=0;
    for(int i=n-1;i>=0;i--) {
        sum1 += arr[i];
        sum -= arr[i]; 
        if(sum1 > sum) {
            cout<<(n-i);
            break;
        }
    }

    return 0;
}
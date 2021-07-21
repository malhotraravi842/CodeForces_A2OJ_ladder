#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin>>n>>k;

    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }

    sort(arr, arr+n);
    int count = 0;

    for(int i=2;i<n;i+=3) {
        if(arr[i] + k <= 5) {
            count++;
        }
    }

    cout<<count<<endl;

    return 0;
}
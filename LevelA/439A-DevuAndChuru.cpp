#include<bits/stdc++.h>
using namespace std;


int main() {
    int n, d;
    cin>>n>>d;
    int arr[n];
    int sum = 0;
    for(int i=0;i<n;i++) {
        cin>>arr[i];
        sum += arr[i];
    }

    int devuTotal = sum + (n-1)*10;

    if(devuTotal > d) {
        cout<<-1;
    }else{
        int churuJoke = (d - sum)/5;
        if(2*(n-1) <= churuJoke) {
            cout<<churuJoke;
        }else{
            cout<<-1;
        }
    }

    return 0;
}
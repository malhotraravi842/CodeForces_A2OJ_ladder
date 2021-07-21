#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    sort(arr.begin(), arr.end());

    int p = arr[0];
    int i = 1;

    while(p>=0) {
        p *= arr[i];
        i++;
    }

    p = arr[n-1];
    int j = n-2;

    while(p<=0) {
        p *= arr[j];
        j--;
    }

    cout<<(i)<<" ";
    for(int k =0;k<i;k++){
        cout<<arr[k]<<" ";
    }
    cout<<endl;

    cout<<(n-j-1)<<" ";
    for(int k=j+1;k<n;k++) {
        cout<<arr[k]<<" ";
    }
    cout<<endl;

    cout<<(j-i+1)<<" ";
    for(int k=i;k<=j;k++){
        cout<<arr[k]<<" ";
    }
    cout<<endl;

    return 0;
}
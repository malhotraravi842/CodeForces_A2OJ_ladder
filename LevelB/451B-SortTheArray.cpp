#include<bits/stdc++.h>
using namespace std;

void isSorted(int arr[], int n) {
    bool flag = true;
    for(int i=0;i<n-1;i++) {
        if(arr[i] > arr[i+1]) {
            flag = false;
            break;
        }
    }

    if(flag) {
        cout<<"yes"<<endl;
        cout<<1<<" "<<1<<endl;
        return;
    }
    
    int i, j;
    for(i=0;i<n-1;i++) {
        if(arr[i]>arr[i+1]) {
            break;
        }
    }
    for(j=n-1;j>0;j--) {
        if(arr[j]<arr[j-1]) {
            break;
        }
    }
    flag = true;
    for(int k=i;k<j;k++) {
        if(arr[k]<arr[k+1]) {
            flag = false;
            break;
        }
    }

    if((i-1)>=0 && arr[j] < arr[i-1]) {
        flag = false;
    }

    if(j+1<n && arr[j+1] < arr[i]) {
        flag = false;
    }

    if(flag) {
        cout<<"yes"<<endl;
        cout<<(i+1)<<" "<<(j+1)<<endl;
    }else {
        cout<<"no";
    }
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }

    isSorted(arr, n);

    return 0;
}
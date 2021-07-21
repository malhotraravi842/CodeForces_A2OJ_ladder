#include<bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    
    int oddCount = 0, evenCount = 0;
    int oddIndex = -1, evenIndex = -1;

    for(int i=0;i<n;i++) {
        if(arr[i]%2==0) {
            if(evenIndex == -1) {
                evenIndex = i + 1;
            }
            evenCount++;
        }else{
            if(oddIndex == -1) {
                oddIndex = i+1;
            }
            oddCount++;
        }
    }

    if(evenCount>oddCount) {
        cout<<oddIndex;
    }else{
        cout<<evenIndex;
    }
    
    return 0;
}
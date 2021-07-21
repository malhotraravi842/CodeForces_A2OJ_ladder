#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin>>n>>k;

    vector<vector<int>> arr(n, vector<int>(2));

    for(int i=0;i<n;i++) {
        cin>>arr[i][0]>>arr[i][1];
    }
    int maxJoy = INT_MIN, joy = 0;
    for(int i=0;i<n;i++) {
        if(arr[i][1] > k){
            joy = arr[i][0] - arr[i][1] + k;
        }else{
            joy = arr[i][0];
        }

        maxJoy = max(maxJoy, joy);
    }

    cout<<maxJoy;
    
    return 0;
}
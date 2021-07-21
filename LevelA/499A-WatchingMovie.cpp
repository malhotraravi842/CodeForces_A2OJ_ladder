#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin>>n>>x;

    vector<vector<int>> arr(n, vector<int>(2));

    for(int i=0;i<n;i++) {
        cin>>arr[i][0]>>arr[i][1];
    }

    int total = 0;
    int prev = 0, temp;
    for(int i=0;i<n;i++) {
        temp = (arr[i][0] - prev - 1);
        total += temp%x + (arr[i][1] - arr[i][0] + 1);
        prev = arr[i][1];
    }

    cout<<total;

    return 0;
}
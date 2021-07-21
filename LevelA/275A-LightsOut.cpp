#include<bits/stdc++.h>
using namespace std;

bool isValid(int i, int j, int n) {
    return (i>=0 && j>=0 && i<n && j<n);
}

int main() {
    int n = 3;
    int arr[n][n];

    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cin>>arr[i][j];
        }
    }

    vector<vector<int>> toggleCount(n, vector<int>(n, 0));

    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(isValid(i-1, j, n)){
                toggleCount[i-1][j] += arr[i][j];
            }
            if(isValid(i, j+1, n)){
                toggleCount[i][j+1] += arr[i][j];
            }
            if(isValid(i+1, j, n)){
                toggleCount[i+1][j] += arr[i][j];
            }
            if(isValid(i, j-1, n)){
                toggleCount[i][j-1] += arr[i][j];
            }

            toggleCount[i][j] += arr[i][j];
        }
    }

    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(toggleCount[i][j]%2 ==0) {
                cout<<1;
            }else{
                cout<<0;
            }
        }
        cout<<endl;
    }

    return 0;
}
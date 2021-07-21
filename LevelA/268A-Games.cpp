#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<vector<int>> arr(n, vector<int>(2));

    for(int i=0;i<n;i++) {
        cin>>arr[i][0]>>arr[i][1];
    }

    int count = 0;

    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(i!=j) {
                if(arr[i][0] == arr[j][1]) {
                    count++;
                }
            }
        }
    }

    cout<<count;

    return 0;

}
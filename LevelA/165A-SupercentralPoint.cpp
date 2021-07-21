#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    vector<vector<int>> arr(n, vector<int>(2));

    for(int i=0;i<n;i++) {
        cin>>arr[i][0]>>arr[i][1];
    }

    int points = 0;
    int l, r, top, bottom;

    for(int i=0;i<n;i++) {
        l=0, r=0, top=0, bottom=0;
        for(int j=0;j<n;j++) {
            if(i==j) {
                continue;
            }

            if(arr[i][0] > arr[j][0] && arr[i][1] == arr[j][1]) {
                r = 1;
            }
            if(arr[i][0] < arr[j][0] && arr[i][1] == arr[j][1]) {
                l = 1;
            }
            if(arr[i][0] == arr[j][0] && arr[i][1] < arr[j][1]) {
                bottom = 1;
            }
            if(arr[i][0] == arr[j][0] && arr[i][1] > arr[j][1]) {
                top = 1;
            }
        }

        if((l + r + bottom + top) == 4) {
            points++;
        }
    }

    cout<<points;

    return 0;
}
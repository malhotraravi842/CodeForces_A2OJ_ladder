#include<bits/stdc++.h>
using namespace std;

int main() {
    int n = 5;
    vector<vector<int>> matrix(n, vector<int>(n));
    int r, c;
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cin>>matrix[i][j];
            if(matrix[i][j] == 1) {
                r = i, c =j;
            }
        }
    }
    int k = abs(r-2) + abs(c-2);

    cout<<k;

    return 0;
}
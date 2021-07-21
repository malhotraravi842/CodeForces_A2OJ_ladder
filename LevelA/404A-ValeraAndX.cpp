#include<bits/stdc++.h>
using namespace std;

string checkMatrix(vector<vector<char>> arr) {
    int n = arr.size();

    char diagonal = arr[0][0];
    char non_diagonal = arr[0][1];

    if(diagonal == non_diagonal) {
        return "NO";
    }
    
    for(int i=0;i<n;i++) {
        if(arr[i][i] != diagonal) {
            return "NO";
        }
    }
    for(int i=0;i<n;i++) {
        if(arr[i][n-i-1] != diagonal) {
            return "NO";
        }
    }

    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(i != j && i+j != n-1 && arr[i][j] != non_diagonal){
                return "NO";
            }
        }
    }

    return "YES";
}

int main() {
    int n;
    cin>>n;

    vector<vector<char>> arr(n, vector<char>(n));

    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cin>>arr[i][j];
        }
    }

    cout<<checkMatrix(arr);

    return 0;
}
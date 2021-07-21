#include<bits/stdc++.h>
using namespace std;

bool isValid(vector<vector<char>> &matrix, int i, int j) {
    int n = matrix.size();
    return (i>=0 && j>=0 && i<n && j<n && matrix[i][j] == 'o');
}

string isEven(vector<vector<char>> &matrix) {
    int n = matrix.size();
    int count;
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            count = 0;
            if(isValid(matrix, i - 1, j)){
                count++;
            }
            if(isValid(matrix, i, j+1)){
                count++;
            }
            if(isValid(matrix, i+1, j)){
                count++;
            }
            if(isValid(matrix, i, j-1)){
                count++;
            }

            if(count != 0 && count%2 != 0) {
                return "NO";
            }
        }
    }

    return "YES";
}

int main() {
    int n;
    cin>>n;
    vector<vector<char>> matrix(n, vector<char>(n));
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cin>>matrix[i][j];
        }
    }

    cout<<isEven(matrix)<<endl;
    
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

void correctChar(vector<vector<char>> chess, int i, int j, char s) {
    int n = chess.size();
    int m = chess[0].size();

    if(i >= 0 && j>=0 && i<n && j<m && chess[i][j] == '.') {
        chess[i][j] = s;
    }
}

int main() {
    int n, m;
    cin>>n>>m;

    vector<vector<char>> chess(n, vector<char>(m));
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin>>chess[i][j];
        }
    }

    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            if(chess[i][j] == '.') {
                chess[i][j] = 'B';
                correctChar(chess, i-1, j, 'W');
                correctChar(chess, i, j+1, 'W');
                correctChar(chess, i+1, j, 'W');
                correctChar(chess, i, j-1, 'W');
            }else if(chess[i][j] == 'W'){
                correctChar(chess, i-1, j, 'B');
                correctChar(chess, i, j+1, 'B');
                correctChar(chess, i+1, j, 'B');
                correctChar(chess, i, j-1, 'B');
            }
        }
    }

    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cout<<chess[i][j];
        }
        cout<<endl;
    }

    return 0;
}
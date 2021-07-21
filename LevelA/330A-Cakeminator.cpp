#include<bits/stdc++.h>
using namespace std;

int main() {
    int r, c;
    cin>>r>>c;

    vector<vector<char>> matrix(r, vector<char>(c));
    unordered_map<int, int> visited;
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            cin>>matrix[i][j];
        }
    }

    int totalCell = 0, cell;
    bool flag;
    for(int i=0;i<r;i++) {
        cell = 0;
        flag = true;
        for(int j=0;j<c;j++) {
            if(matrix[i][j] == 'S') {
                flag = false;
                break;
            }else{
                cell++;
            }
        }

        if(flag) {
            totalCell += cell;
            visited[i] = 1; 
        }
    }

    for(int j=0;j<c;j++) {
        cell = 0;
        flag = true;
        for(int i=0;i<r;i++) {
            if(matrix[i][j] == 'S') {
                flag = false;
                break;
            }else{
                if(visited.find(i) == visited.end()){
                    cell++;
                }
            }
        }

        if(flag) {
            totalCell += cell;
        }
    }

    cout<<totalCell<<endl;

    return 0;
}
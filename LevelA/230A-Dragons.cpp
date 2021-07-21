#include<bits/stdc++.h>
using namespace std;

bool compare(vector<int> v1, vector<int> v2){
    if(v1[0] == v2[0]) {
        return v1[1]<v2[1];
    }

    return v1[0]<v2[0];
}

string isWinner(vector<vector<int>> dragon, int s) {
    int n = dragon.size();

    sort(dragon.begin(), dragon.end(), compare);

    for(int i=0;i<n;i++) {
        if(s>dragon[i][0]) {
            s+= dragon[i][1];
        }else{
            return "NO";
        }
    }

    return "YES";
}

int main() {
    int s, n;
    cin>>s>>n;
    vector<vector<int>> dragon(n, vector<int>(2));
    for(int i=0;i<n;i++) {
        cin>>dragon[i][0]>>dragon[i][1];
    }

    cout<<isWinner(dragon, s);

    return 0;
}
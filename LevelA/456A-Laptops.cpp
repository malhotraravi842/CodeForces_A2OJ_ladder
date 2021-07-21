#include<bits/stdc++.h>
using namespace std;

bool compare(vector<int> v1, vector<int> v2) {
    if(v1[0] == v2[0]) {
        return v1[1]<v2[1];
    }

    return v1[0]<v2[0];
}

string alex(vector<vector<int>> arr) {
    int n = arr.size();
    
    sort(arr.begin(), arr.end(), compare);
    for(int i=1;i<n;i++) {
        if(arr[i-1][1] > arr[i][1]) {
            return "Happy Alex";
        }
    }

    return "Poor Alex";
}
 
int main() {
    int n;
    cin>>n;

    vector<vector<int>> arr(n, vector<int>(2));

    for(int i=0;i<n;i++) {
        cin>>arr[i][0]>>arr[i][1];
    }
    
    cout<<alex(arr);
    
    return 0;
}
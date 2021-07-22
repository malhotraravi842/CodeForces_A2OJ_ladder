#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin>>n>>m;

    map<string, string> mp;
    string s1, s2;
    for(int i=0;i<m;i++) {
        cin>>s1>>s2;
        mp[s1] = s2;
    }
    
    vector<string> v(n);
    for(int i=0;i<n;i++) {
        cin>>v[i];
    }
    int sz1, sz2;
    for(int i=0;i<n;i++) {
        sz1 = v[i].length();
        sz2 = mp[v[i]].length();

        if(sz1 > sz2) {
            v[i] = mp[v[i]];
        }
    }

    for(int i=0;i<n;i++) {
        cout<<v[i]<<" ";
    }

    return 0;
}
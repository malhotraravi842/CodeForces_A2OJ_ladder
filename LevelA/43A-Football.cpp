#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    map<string, int> m;
    string s;
    while(n) {
        cin>>s;
        m[s]++;
        n--;
    }

    int maxm = INT_MIN;
    for(auto x:m) {
        if(x.second > maxm) {
            maxm = x.second;
            s = x.first;
        }
    }

    cout<<s;

    return 0;
}
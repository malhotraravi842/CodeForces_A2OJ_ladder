#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    
    getline(cin, s);
    set<char> s1;
    int n = s.length();
    for(int i=1;i<n-1;i++) {
        if(s[i] != ' ' && s[i] != ',') {
            s1.insert(s[i]);
        }
    }
    cout<<s1.size();

    return 0;

}
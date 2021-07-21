#include<bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cin>>s>>t;

    int n1 = s.length();
    int n2 = t.length();

    int i=0, j=0;

    while(j<n2) {
        if(s[i] == t[j]) {
            i++;
        }
        j++;
    }

    cout<<(i+1);

    return 0;
}
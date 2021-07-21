#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    int n = s.length();
    string ans = "";
    for(int i=0;i<n;i++) {
        int index = s[i];
        if(index >= 65 && index<=90) {
            index -= 65;
        }else{
            index -= 97;
        }
        if(index != 0 && index != 4 && index != 8 && index != 14 && index!=20 && index!=24) {
            ans += ".";
            ans += (index + 97);
        }
    }

    cout<<ans;

    return 0;
}
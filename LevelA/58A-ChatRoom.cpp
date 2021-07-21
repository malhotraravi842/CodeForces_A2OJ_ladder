#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    int n = s.length();
    string hello = "hello";

    int i=0, j=0;
    for(int i=0;i<n;i++) {
        if(s[i] == hello[j]){
            j++;
        }
        if(j==5) {
            break;
        }
    }

    if(j==5) {
        cout<<"YES";
    }else{
        cout<<"NO";
    }

    return 0;
}
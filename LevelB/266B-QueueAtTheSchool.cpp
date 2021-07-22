#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, t;
    cin>>n>>t;
    string s;
    cin>>s;

    for(int i=0;i<t;i++) {
        int j=1;
        while(j<n) {
            if(s[j-1] == 'B' && s[j]=='G') {
                swap(s[j-1], s[j]);
                j+=2;
            }else{
                j++;
            }
        }
    }

    cout<<s;

    return 0;
}
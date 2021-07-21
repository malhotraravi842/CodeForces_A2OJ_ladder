#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin>>t;
    while(t) {
        string word;
        cin>>word;

        int n = word.length();

        if(n<=10) {
            cout<<word<<endl;
        }else{
            string ans = word[0] + to_string(n-2) + word[n-1];
            cout<<ans<<endl;
        }

        t--;
    }

    return 0;
}
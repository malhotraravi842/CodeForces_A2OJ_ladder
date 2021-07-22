#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int n;
    cin>>s;
    cin>>n;
    int arr[26];
    int maxm = INT_MIN, total = 0;
    for(int i=0;i<26;i++) {
        cin>>arr[i];
        maxm = max(maxm, arr[i]);
    }
    int i;
    for(i=0;i<s.length();i++) {
        total += (i+1)*arr[s[i]-'a'];
    }


    while(n) {
        total += (i+1)*maxm;
        i++;
        n--;
    }

    cout<<total<<endl;

    return 0;
}
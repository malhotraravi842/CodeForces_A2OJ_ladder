#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    if(n>0) {
        cout<<n;
    }else{
        string num = to_string(n);
        string ans = "";

        int l = num.length();
        for(int i=0;i<l-2;i++) {
            ans += num[i];
        }

        ans += num[l-2] > num[l-1] ? num[l-1]: num[l-2];
        
        cout<<stoi(ans);
    }

    return 0;

}
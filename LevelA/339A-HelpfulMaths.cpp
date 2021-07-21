#include<bits/stdc++.h>
using namespace std;


int main() {
    string s;
    cin>>s;

    vector<int> arr(3, 0);
    int n = s.length();
    for(int i=0;i<n;i+=2){
        arr[s[i] - '1']++;
    }

    s = "";
    int k = 0;
    for(int i=0;i<3;i++) {
        while(arr[i]) {
            s += (char)(i+49);
            arr[i]--;
            k+=2;
            if(k<n) {
                s += '+';
            }
        }
    }

    cout<<s;

    return 0;
}
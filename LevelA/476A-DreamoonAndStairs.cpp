#include<bits/stdc++.h>
using namespace std;


int main() {
    int n, m;
    cin>>n>>m;

    if(n==m) {
        cout<<n;
    }else if(m>n){
        cout<<-1;
    }else{
        int twoStep = n/2;
        int minStairs = twoStep + n%2;

        int rem = minStairs%m;

        if(rem == 0) {
            cout<<minStairs;
        }else if(rem > twoStep) {
            cout<<-1;
        }else{
            cout<<(minStairs + m - rem);
        }
    }

    return 0;
}
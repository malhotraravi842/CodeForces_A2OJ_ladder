#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define m 1000000007

ll modulo(ll n) {
    if(n<0) {
        return m - abs(n)%m;
    }

    return n%m;
}

ll fnValue(ll n, ll x, ll y) {
    if(n==1) return modulo(x);

    if(n==2) return modulo(y);

    return modulo(modulo(fnValue(n-1, x, y)) - modulo(fnValue(n-2, x, y)));
}


int main() {
    ll x, y, n;
    cin>>x>>y>>n;

    ll k = fnValue(n, x, y);

    cout<<k;
    int n = 2;

    return 0;
}
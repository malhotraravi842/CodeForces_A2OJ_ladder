#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll combination(ll n) {
    return (n*(n-1))/2;
}

int main() {
    ll n, m;
    cin>>n>>m;

    ll minm, maxm;

    // Max Pair
    maxm = combination(n - (m-1));

    // Min Pair
    ll size = n/m;
    ll rem = n%m;

    minm = rem*combination(size+1) + (m-rem)*combination(size);

    cout<<minm<<" "<<maxm<<endl;

    return 0;
}
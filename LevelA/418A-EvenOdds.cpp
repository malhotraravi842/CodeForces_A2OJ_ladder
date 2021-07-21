#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll evenOdds(ll n, ll k) {
    ll odd, even, ans;

    if(n%2==0) {
        odd = n/2;
    }else{
        odd = n/2 + 1;
    }

    even = n/2;

    if(k>odd) {
        ans = 2 + (k - odd - 1)*2;
        return ans;
    }else{
        ans = 1 + (k-1)*2;
    }

    return ans;
}

int main() {
    ll n, k;
    cin>>n>>k;

    cout<<evenOdds(n, k)<<endl;

    return 0;
}
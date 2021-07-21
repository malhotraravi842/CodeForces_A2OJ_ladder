#include<bits/stdc++.h>
using namespace std;
#define ll long long int

bool isPrime(ll n) {
    if(n<=1) return false;
    if(n<=3) return true;

    if((n+1)%6 == 0 || (n-1)%6==0) {
        return true;
    }

    return false;
}

int main() {
    for(int i=1;i<100;i++) {
        if(isPrime(i)) {
            cout<<i<<" ";
        }
    }
    // ll l, r;
    // cin>>l>>r;
    // ll prime = -1;
    // for(ll i=l+1;i<r;i++) {
    //     if(isPrime(i)) {
    //         prime = i;
    //         break;
    //     }
    // }

    // if(prime!=-1) {
    //     if((prime-1) >= l && (prime+1)<=r) {
    //         cout<<(prime-1)<<" "<<prime<<" "<<(prime+1);
    //     }else {
    //         cout<<-1;
    //     }
    // }else{
    //     cout<<-1;
    // }

    return 0;
}
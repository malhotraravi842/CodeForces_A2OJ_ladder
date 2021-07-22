#include<bits/stdc++.h>
using namespace std;
#define int int64_t
int primes[(int)1e6+10];
set<int> tprime;

void t_primes() {
    tprime.insert(4);
    for(int i=3;i<(int)1e6+1;i+=2){
        if(primes[i] == 0) {
            tprime.insert(i*i);
            for(int j=i;j<=1e6;j+=i) {
                primes[j] = 1;
            }
        }
    }
}


int32_t main() {
    int n;
    cin>>n;
    t_primes();
    int num;
    for(int i=0;i<n;i++) {
        cin>>num;
        if(tprime.find(num) != tprime.end()){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
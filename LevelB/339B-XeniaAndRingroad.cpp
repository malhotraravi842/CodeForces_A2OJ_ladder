#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ll n, m;
    cin>>n>>m;

    ll arr[m];
    for(ll i=0;i<m;i++) {
        cin>>arr[i];
    }

    ll house = 1;
    ll total_time = 0;
    for(ll i=0;i<m;i++) {
        if(house > arr[i]) {
            total_time += n - house +1;
            house = 1;
        }
        
        total_time += arr[i] - house;
        house = arr[i];
        
    }

    cout<<total_time<<endl;

    return 0;
}
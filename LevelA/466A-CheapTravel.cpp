#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m, a, b;
    cin>>n>>m>>a>>b;
    int total_cost = 0;
    if(m<n) {
        if(m*a < b) {
            total_cost += n*a;
        }else{
            int res = n%m;
            int num = n/m;

            if(res==0) {
                total_cost += num*b;
            }else if(res*a < b) {
                total_cost += num*b + res*a;
            }else {
                total_cost += num*b + b;
            }
        }
    }else{
        if(n*a < b) {
            total_cost += n*a;
        }else {
            total_cost += b;
        }
    }

    cout<<total_cost;

    return 0;

}
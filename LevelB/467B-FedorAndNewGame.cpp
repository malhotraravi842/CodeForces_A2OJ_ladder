#include<bits/stdc++.h>
using namespace std;

int differentBits(int a, int b) {
    int c = a^b;
    int count = 0;

    while(c) {
        if(c&1) {
            count++;
        }
        c = c>>1;
    }

    return count;
}

int main() {
    int n,m,k;
    cin>>n>>m>>k;
    int army[m+1];
    for(int i=0;i<(m+1);i++) {
        cin>>army[i];
    }

    int total = 0;
    int fedor = army[m];
    int types_of_army;
    for(int i=0;i<m;i++) {
        types_of_army = differentBits(fedor, army[i]);
        if(types_of_army <= k) {
            total++;
        }
    }

    cout<<total<<endl;

    return 0;
}
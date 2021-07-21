#include<bits/stdc++.h>
using namespace std;

int main() {
    int k, l;
    cin>>k>>l;
    int d = 0;
    
    while(l%k == 0) {
        l = l/k;
        d++;
    }

    if(d>=1 && l==1) {
        cout<<"YES"<<endl;
        cout<<(d-1)<<endl;
    }else{
        cout<<"NO";
    }

    return 0;
}
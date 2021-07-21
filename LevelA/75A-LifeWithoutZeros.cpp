#include<bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin>>a>>b;

    int c = a+b;

    int n1 = 0, n2=0, n3=0;
    int place = 1;
    while(a) {
        if(a%10 != 0) {
            n1 = n1 + place*(a%10);
            place *= 10;
        }
        a /= 10;
    }


    place = 1;
    while(b) {
        if(b%10 != 0) {
            n2 = n2 + place*(b%10);
            place *= 10;
        }
        b /= 10;
    }

    place = 1;
    while(c) {
        if(c%10 != 0) {
            n3 = n3 + place*(c%10);
            place *= 10;
        }
        c /= 10;
    }

    if(n1 + n2 == n3) {
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    
    return 0;
}
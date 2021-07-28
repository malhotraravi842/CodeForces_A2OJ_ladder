#include<bits/stdc++.h>
using namespace std;

int main() {
    int r, x, x1, y, y1;
    cin>>r>>x>>y>>x1>>y1;

    int count = 0;
    while(true) {
        if(x>x1 || y>y1) {
            break;
        }
        if(x<x1) {
            x+= 2*r;
        }
        if(y<y1) {
            y+= 2*r;
        }
        count++;
    }

    cout<<count<<endl;

    return 0;
}
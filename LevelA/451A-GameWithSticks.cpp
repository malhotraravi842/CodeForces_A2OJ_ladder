#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin>>n>>m;

    int minm = min(n, m);

    if(minm%2 ==0) {
        cout<<"Malvika";
    }else{
        cout<<"Akshat";
    }

    return 0;

}
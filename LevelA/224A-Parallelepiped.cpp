#include<bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin>>a>>b>>c;

    float p = sqrt(a*b*c);
    int ans = 4*((a + b + c)/p);

    cout<<ans;

    return 0;
}
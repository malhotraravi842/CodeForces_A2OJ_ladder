#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, l;
    cin>>n>>l;
    vector<double> lantern(n);
    for(int i=0;i<n;i++) {
        cin>>lantern[i];
    }

    sort(lantern.begin(), lantern.end());
    double radius = lantern[0];

    for(int i=1;i<n;i++) {
        radius = max(radius, (lantern[i] - lantern[i-1])/2.0);
    }
    radius = max(radius, l - lantern[n-1]);

    cout<<fixed<<setprecision(10)<<radius<<endl;

    return 0;
}
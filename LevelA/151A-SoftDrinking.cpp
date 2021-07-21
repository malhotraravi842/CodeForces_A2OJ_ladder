#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int n, k, l, c, d, p, nl, np;

    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    int drink = k*l;

    int toasts = drink/nl;

    int limes = c*d;

    int salt = p/np;

    int ans = (min(min(toasts, limes), min(limes, salt)))/n;

    cout<<ans;
    
    return 0;
}
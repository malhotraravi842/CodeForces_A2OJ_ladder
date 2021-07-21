#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, c;
    cin>>n>>c;

    int kilos[n];
    for(int i=0;i<n;i++) {
        cin>>kilos[i];
    }

    int maxProfit = 0, profit;
    for(int i=1;i<n;i++) {
        profit = kilos[i-1] - kilos[i] - c;

        maxProfit = max(maxProfit, profit);
    }

    cout<<maxProfit;
    
    return 0;
}
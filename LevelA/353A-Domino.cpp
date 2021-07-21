#include<bits/stdc++.h>
using namespace std;

int minLayerSwap(vector<vector<int>> pizza, int n) {
    int upper_sum = 0, lower_sum = 0;
    int upper_odd = 0, lower_odd = 0;

    for(int i=0;i<n;i++) {
        upper_sum += pizza[i][0];
        lower_sum += pizza[i][1];

        if(pizza[i][0]%2 != 0) {
            upper_odd++;
        }

        if(pizza[i][1]%2 != 0) {
            lower_odd++;
        }
    }

    if(upper_sum%2 == 0 && lower_sum%2 == 0)  {
        return 0;
    }
    if(upper_sum%2 == 0 || lower_sum%2 == 0) {
        return -1;
    }

    int k = 0;
    for(int i=0;i<n;i++) {
        if(pizza[i][0]%2 != pizza[i][1]%2) {
            upper_sum = upper_sum - pizza[i][0] + pizza[i][1];
            lower_sum = lower_sum + pizza[i][0] - pizza[i][1];
            k++;
        }
        if(upper_sum%2 == 0 && lower_sum%2 == 0) {
            return k;
        }
    }

    return -1;
}

int main() {
    int n;
    cin>>n;
    vector<vector<int>> pizza(n, vector<int>(2));
    for(int i=0;i<n;i++) {
        cin>>pizza[i][0]>>pizza[i][1];
    }

    cout<<minLayerSwap(pizza, n);

    return 0;
}
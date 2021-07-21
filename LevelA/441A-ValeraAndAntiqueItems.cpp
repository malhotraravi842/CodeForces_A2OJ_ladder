#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, v, k, price;
    cin>>n>>v;
    bool flag;
    vector<int> sellers;
    vector<vector<int>> arr;
    for(int i=0;i<n;i++) {
        cin>>k;
        flag = true;
        for(int j=0;j<k;j++) {
            cin>>price;

            if(flag) {
                if(v > price) {
                    sellers.push_back(i+1);
                    flag = false;
                }
            }
        }
    }

    int maxSeller = sellers.size();
    cout<<maxSeller<<endl;

    for(int i=0;i<maxSeller;i++) {
        cout<<sellers[i]<<" ";
    }

    return 0;
}
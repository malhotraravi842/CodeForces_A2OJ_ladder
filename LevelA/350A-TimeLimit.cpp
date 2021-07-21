#include<bits/stdc++.h>
using namespace std;

int minTL(int correct[], int wrong[], int n, int m) {
    int w_tl = INT_MAX;
    for(int i=0;i<m;i++) {
        w_tl = min(w_tl, wrong[i]);
    }

    int c_max_tl = INT_MIN, c_min_tl = INT_MAX;
    for(int i=0;i<n;i++) {
        c_max_tl = max(c_max_tl, correct[i]);
        c_min_tl = min(c_min_tl, correct[i]);
    }

    if(w_tl < c_max_tl || w_tl == c_max_tl){
        return -1;
    }
    int tl = w_tl-1;

    while(tl > c_max_tl && 2*c_min_tl < tl) {
        tl--;
    }

    if(2*c_min_tl > tl) {
        return -1;
    }

    return tl;
}

int main() {
    int n, m;
    cin>>n>>m;

    int correct[n], wrong[m];
    for(int i=0;i<n;i++) {
        cin>>correct[i];
    }
    for(int i=0;i<m;i++) {
        cin>>wrong[i];
    }

    cout<<minTL(correct, wrong, n, m);

    return 0;
}
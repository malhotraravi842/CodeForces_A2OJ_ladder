#include<bits/stdc++.h>
using namespace std;

bool checkNum(int num, int k) {
    int l_num;
    while(num) {
        l_num = num%10;
        if(l_num == 7 || l_num == 4) {
            k--;
        }
        num = num/10;
        if(k<0) {
            return false;
        }
    }

    return true;
}

int main() {
    int n, k;
    cin>>n>>k;

    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    int total = 0;
    for(int i=0;i<n;i++) {
        if(checkNum(arr[i], k)) {
            total++;
        }
    }

    cout<<total;

    return 0;
}
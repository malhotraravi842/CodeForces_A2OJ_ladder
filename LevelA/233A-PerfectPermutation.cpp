#include<bits/stdc++.h>
using namespace std;

void printPermutation(int n) {
    if(n<=1 || n%2 != 0){
        cout<<-1;
        return;
    }

    for(int i=0;i<n;i+=2) {
        cout<<(i+2)<<" "<<(i+1)<<" ";
    }
}

int main() {
    int n;
    cin>>n;

    printPermutation(n);

    return 0;
}
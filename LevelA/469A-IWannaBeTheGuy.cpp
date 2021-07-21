#include<bits/stdc++.h>
using namespace std;

string wannaBeTheGuy(vector<int> arr, int n) {
    for(int i=1;i<=n;i++) {
        if(arr[i] == 0) {
            return "Oh, my keyboard!";
        }
    }

    return "I become the guy.";
}

int main() {
    int n, p;
    cin>>n>>p;
    int num;
    vector<int> arr(n+1, 0);
    for(int i=0;i<p;i++) {
        cin>>num;
        arr[num] = 1;
    }
    cin>>p;
    for(int i=0;i<p;i++) {
        cin>>num;
        arr[num] = 1;
    }

    cout<<wannaBeTheGuy(arr, n);
    
    return 0;

}
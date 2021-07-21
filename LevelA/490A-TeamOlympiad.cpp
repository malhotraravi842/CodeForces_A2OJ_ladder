#include<bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    vector<int> one, two, three;
    for(int i=0;i<n;i++) {
        if(arr[i]==1) {
            one.push_back(i+1);
        }else if(arr[i]==2) {
            two.push_back(i+1);
        }else{
            three.push_back(i+1);
        }
    }
    int o = one.size(), t = two.size(), th = three.size();
    int maxTeam = min(min(o, t), min(t, th));

    cout<<maxTeam<<endl;
    for(int i=0;i<maxTeam;i++) {
        cout<<one[i]<<" "<<two[i]<<" "<<three[i]<<endl;
    }
    
    return 0;
}
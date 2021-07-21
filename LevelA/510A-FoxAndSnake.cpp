#include<bits/stdc++.h>
using namespace std;


int main() {
    int n, m;
    cin>>n>>m;
    
    for(int i=0;i<n;i++) {
        if((i+1)%2 != 0){
            for(int j=0;j<m;j++) {
                cout<<'#';
            }
        }else{
            for(int j=0;j<m;j++) {
                if(((i+1)/2)%2 != 0 && j==m-1 || ((i+1)/2)%2 == 0 && j==0) {
                    cout<<'#';
                }else{
                    cout<<'.';
                }
            }
        }
        cout<<endl;
    }
    return 0;
}
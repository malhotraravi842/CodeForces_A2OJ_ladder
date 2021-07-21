#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }

    int chest = 0, biceps = 0, back = 0;
    int rem;
    for(int i=0;i<n;i++) {
        rem = (i+1)%3;
        if(rem==0) {
            back += arr[i];
        }else if(rem==1) {
            chest += arr[i];
        }else if(rem==2){
            biceps += arr[i];
        }
    }


    if(chest > biceps && chest > back){
        cout<<"chest";
    }else if(biceps > chest && biceps > back) {
        cout<<"biceps";
    }else {
        cout<<"back";
    }
    
    return 0;
}
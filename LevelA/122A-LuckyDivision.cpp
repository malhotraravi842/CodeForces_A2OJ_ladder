#include<bits/stdc++.h>
using namespace std;

string LuckDivision(int num ){
    int arr[] = {777, 774, 747, 744, 477, 474, 444, 77, 74, 47, 44, 7, 4};

    for(int i=0;i<13;i++) {
        if(num%arr[i] == 0){
           return "YES";
        }
    }

    return "NO";
}

int main() {
    int num;
    cin>>num;

    cout<<LuckDivision(num);

    return 0;
}
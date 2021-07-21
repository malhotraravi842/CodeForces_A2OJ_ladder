#include<bits/stdc++.h>
using namespace std;


int main() {
    int a, b, c, d;
    cin>>a>>b>>c>>d;

    int misha_score = max((3*a)/10, a - (a/250)*c);
    int vasya_score = max((3*b)/10, b - (b/250)*d);

    if(misha_score==vasya_score) {
        cout<<"Tie";
    }else if(misha_score>vasya_score) {
        cout<<"Misha";
    }else{
        cout<<"Vasya";
    }

    return 0;
}
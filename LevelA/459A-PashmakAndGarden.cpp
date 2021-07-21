#include<bits/stdc++.h>
using namespace std;

int main() {
    int x1, x2, y1, y2;
    cin>>x1>>y1>>x2>>y2;
    int temp;
    if(x1 != x2 && y1 != y2 && abs(y2 - y1) != abs(x2-x1)) {
        cout<<-1;
    }else if(x1 == x2){
        temp = abs(y2-y1);
        cout<<(x1 + temp)<<" "<<y1<<" "<<(x2 + temp)<<" "<<y2;
    }else if(y1==y2) {
        temp = abs(x1-x2);
        cout << x1 << " " << y1 + temp << " " << x2 << " " << y2 + temp << endl;
    }else{
        cout << x1 << " " << y2 << " " << x2 << " " << y1 << endl;
    }

    return 0;

}
#include<bits/stdc++.h>
using namespace std;

bool isEight(int n) {
    if(n<0) {
        n *= -1;
    }
    n = n/10;
    while(n) {
        if(n%10 == 8) {
            return true;
        }
        n = n/10;
    }

    return false;
}

int minFloor(int n) {
    int place = 0, ans=0;
    if(n==0) return 8;
    if(isEight(n) && n%10 != 9) {
        return 1;
    }
    while(n) {
        if(n%10 == 0) {
            return 9;
        }else if(n%10 == 8) {
            return 10;
        }else if(n%10 > 8) {
            ans = ans*10 +  9;
            n = n/10;
            place++;
        }else {
            ans /= 10;
            ans += 8 - n%10;
            return ans;
        }
    }

    return 9;
}

int main() {
    int n;
    cin>>n;
    

    cout<<minFloor(n);

    return 0;
}
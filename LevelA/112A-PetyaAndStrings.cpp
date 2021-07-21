#include<bits/stdc++.h>
using namespace std;

int checkString(string s1, string s2, int n1) {
    for(int i=0;i<n1;i++) {
        int index1 = s1[i];
        int index2 = s2[i];

        if(index1 >= 65 && index1<=90) {
            index1 -= 65;
        }else{
            index1 -= 97;
        }

        if(index2 >= 65 && index2<=90) {
            index2 -= 65;
        }else{
            index2 -= 97;
        }

        if(index1 > index2) {
            return 1;
        }else if(index2 > index1) {
            return -1;
        }
    }

    return 0;
}

int main() {
    string s1, s2;
    cin>>s1>>s2;
    int n1 = s1.length();    

    cout<<checkString(s1, s2, n1);

    return 0;
}
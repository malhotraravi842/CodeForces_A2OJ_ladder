#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    int size = s.size();
    int index = -1;
    int num, last_digit = s[size-1]-'0';
    for(int i=size-2;i>=0;i--) {
        num = s[i] - '0';
        if(num%2 ==0){
            if(index != -1) {
                if(last_digit > num) {
                    index = i;
                }
            }else {
                index = i;
            }
        }
    }

    if(index==-1) {
        cout<<-1<<endl;
    }else{
        swap(s[index], s[size-1]);
        cout<<s<<endl;
    }

    return 0;
}
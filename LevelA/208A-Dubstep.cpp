#include<bits/stdc++.h>
using namespace std;

int main() {
    string remix;
    cin>>remix;

    string dubstep = "WUB";

    string s = "", space = "";
    
    int n = remix.length();
    int i = 0, j=0;

    while(i<n) {
        if(remix[i] != dubstep[j]) {
            if(space == " ") {
                if(s != "") {
                    s += space;
                }
                space = "";
            }
            s += remix[i];
            i++;
        }else{
            string temp = "";
            while(i<n && j<3 && remix[i] == dubstep[j]) {
                temp += remix[i];
                i++, j++;
            }

            if(temp == dubstep) {
                temp = "";
                space = " ";
            }else {
                if(space == " ") {
                    if(s != "") {
                        s += space;
                    }
                    space = "";
                }
                s += temp;
            }
            
            j=0;
        }
    }

    cout<<s;

    return 0;

}
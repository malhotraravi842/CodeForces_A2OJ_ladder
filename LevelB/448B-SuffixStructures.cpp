#include<bits/stdc++.h>
using namespace std;

bool checkAutomaton(string s, string t) {
    int i=0, j=0;
    int n1 = s.length();
    int n2 = t.length();

    while(i<n1 && j<n2) {
        while(i<n1 && t[j] != s[i]) {
            i++;
        }
        if(t[j] == s[i]) {
            i++;
        }else {
            break;
        }
        j++;
    }

    if(j==n2) {
        return true;
    }else {
        return false;
    }
}

bool checkArray(string s, string t, bool *isGreater) {
    vector<int> arr1(26, 0), arr2(26, 0);
    for(int i=0;i<s.size();i++) {
        arr1[s[i]-'a']++;
    }
    for(int i=0;i<t.size();i++) {
        arr2[t[i]-'a']++;
    }

    bool flag = true;
    for(int i=0;i<26;i++) {
        if(arr1[i] < arr2[i]) {
            flag = false;
        }

        if(arr1[i] > arr2[i]) {
            *isGreater = true;
        }
    }

    return flag;
}

string suffixStructure(string s, string t) {
    int n1 = s.size();
    int n2 = t.size();

    if(checkAutomaton(s, t)){
        return "automaton";
    }

    bool isGreater = false;

    if(checkArray(s, t, &isGreater)) {
        if(isGreater) {
            return "both";
        }else {
            return "array";
        }
    }

    return "need tree";
}

int main() {
    string s, t;
    cin>>s>>t;

    cout<<suffixStructure(s, t);

    return 0;
}
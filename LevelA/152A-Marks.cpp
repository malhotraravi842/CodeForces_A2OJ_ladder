#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    char gradebook[n][m];
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        cin>>gradebook[i][j];
    }
    
    set<int>s;
    for(int j=0;j<m;j++)
    {
        int maxm=INT_MIN;
        
        for(int i=0;i<n;i++)
        {
            int x=gradebook[i][j]-'0';
            if(x>=maxm)
                maxm=x;
        }
        for(int i=0;i<n;i++)
        {
            int y=gradebook[i][j]-'0';
            if(y==maxm)
            s.insert(i+1);
        }
    }
    cout<<s.size()<<endl;
}
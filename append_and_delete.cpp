#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s,t;
    cin>>s>>t;
    int l1,l2,i,j,k;
    cin>>k;
    l1=s.length();
    l2=t.length();
    for(i=0;i<l1;i++)
    {
        if(s[i]!=t[i])
            break;
    }
    j=l1-i;
    j=j+l2-i;
    if(j<=k&&l1>=l2)
    {
        cout<<"Yes";
    }
    else 
    {
        cout<<"No";
    }
    return 0;
}

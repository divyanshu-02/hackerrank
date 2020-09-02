#include <bits/stdc++.h>

using namespace std;

struct strings
{
    string a;
    int l;
};

int check(strings s)
{
    int i,j=0;
    int a1[26]={0},a2[26]={0};
    for(i=0;i<s.l/2;i++)
    {
        a1[s.a[i]-97]++;
    }
    for(i=s.l/2;i<s.l;i++)
    {
        a2[s.a[i]-97]++;
    }
    for(i=0;i<26;i++)
    {
        if(a1[i]!=a2[i])
        {
            j=j+abs(a1[i]-a2[i]);
        }
    }
    return j/2;
}

int main()
{
    int n,i;
    cin>>n;
    strings s[n];
    for(i=0;i<n;i++)
    {
        cin>>s[i].a;
        s[i].l=s[i].a.length();
    }
    for(i=0;i<n;i++)
    {
        if(s[i].l%2!=0)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            cout<<check(s[i])<<endl;
        }
    }
    return 0;
}

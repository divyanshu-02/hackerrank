#include <bits/stdc++.h>

using namespace std;


bool comp(string &a,string &b)
{
    if(a.length()==b.length())
    {
        return a<b;
    }
    else
    {
        return a.length()<b.length();
    }
}
int main()
{
    long long int n,i;
    cin>>n;
    vector<string> ar;
    string a;
    for(i=0;i<n;i++)
    {
        cin>>a;
        ar.push_back(a);
    }
    sort(ar.begin(),ar.end(),comp);
    for(i=0;i<n;i++)
    {
        cout<<ar[i]<<endl;
    }
    return 0;
}

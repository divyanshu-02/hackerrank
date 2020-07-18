#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,m,j,max=0,temp,min;
    cin>>n>>m;
    long long int s[m],i;
    for(i=0;i<m;i++)
    {
        cin>>s[i];
    }
    for(i=0;i<n;i++)
    {
        min=n+1;
        for(j=0;j<m;j++)
        {
            temp=abs(i-s[j]);
            if(temp<min)
                min=temp;
        }
        if(min>max)
            max=min;
    }
    cout<<max;
}

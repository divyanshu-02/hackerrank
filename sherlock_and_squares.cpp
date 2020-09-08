#include <bits/stdc++.h>

using namespace std;

long long int count(long long int a,long long int b)
{
    long long int i,m,d=0;
    float l;
    for(i=a;i<=b;i++)
    {
        l=sqrt(i);
        m=(int)l;
        if(l==m)
        {
            break;
        }
    }
    while(i<=b)
    {
        d++;
        m=m+1;
        i=m*m;
    }
    return d;

}

int main()
{
    int n;
    cin>>n;
    long long int a[n],b[n],i;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        cin>>b[i];
    }    
    for(i=0;i<n;i++)
    {
        cout<<count(a[i],b[i])<<endl;
    }
    return 0;
}

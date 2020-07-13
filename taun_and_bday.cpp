#include <bits/stdc++.h>

using namespace std;
struct gift
{
    long long int b,w;
    long long int bc,wc,z;
};
int main()
{
    long long int t,i,s;
    cin>>t;
    gift g[t];
    for(i=0;i<t;i++)
    {
        cin>>g[i].b>>g[i].w;
        cin>>g[i].bc>>g[i].wc>>g[i].z;
    }
    for(i=0;i<t;i++)
    {
        long long int min1=g[i].bc+g[i].z;
        long long int min2=g[i].wc+g[i].z;
        if(g[i].wc<min1)
            min1=g[i].wc;
        if(g[i].bc<min2)
            min2=g[i].bc;    
        s=min2*g[i].b+min1*g[i].w;
        cout<<s<<endl;
    }
    return 0;
}

#include <bits/stdc++.h>

using namespace std;
struct choclate
{
    long long int n,c,m;
};
int main()
{
    long long int t,i,total,temp;
    cin>>t;
    choclate c[t];
    for(i=0;i<t;i++)
    {
        cin>>c[i].n>>c[i].c>>c[i].m;
    }
    for(i=0;i<t;i++)
    {
        long long int num=c[i].n/c[i].c;
        total=num;    
        while(num>=c[i].m)
        {
            temp=num%c[i].m;
            num=num/c[i].m;
            total=total+num;
            num=num+temp;
        }
        cout<<total<<endl;
    }
    return 0;

}

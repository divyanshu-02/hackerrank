#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n],i,j,b[n],x,c;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        x=i+1;
        for(j=0;j<n;j++)
        {
            if(a[j]==x)
            {
                c=j+1;
                break;
            }    
        }
        for(j=0;j<n;j++)
        {
            if(a[j]==c)
            {
                cout<<j+1<<endl;
                break;
            }
        }
    }
    return 0;
}

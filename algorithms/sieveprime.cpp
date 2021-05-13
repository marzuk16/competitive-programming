#include<bits/stdc++.h>
using namespace std;

int main()
{
    int usersize;
    cin>>usersize;
    const int size=usersize;

    int a[size],i,j;
    memset(a,-1,sizeof(a));
    for(i=2; i<size; i++)
    {
        if(a[i]==-1)
        {
            for(j=2; i*j<size; j++)
            {
                a[i*j]=0;
            }
        }
    }
    for(i=2; i<size; i++)
    {
        if(a[i]==-1)
            cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[10],i,n;

    cin>>n;

    for(i=0; i<10; i++)
    {
        if(i==0)
        {
            a[i]=n;
        }
        else
        {
            a[i]=n*2;
            n=a[i];
        }

    }

    for(i=0; i<10; i++)
    {
        cout<<"N"<<"["<<i<<"]"<<" = "<<a[i]<<endl;
    }

    return 0;
}

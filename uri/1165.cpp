#include<bits/stdc++.h>
using namespace std;

int prime(int n);
int main()
{
    int n,p,i,j,flag;

    cin>>n;

    for(i=1; i<=n; i++)
    {
        cin>>j;
        flag=prime(j);
        if(flag==1)
        cout<<j<<" eh primo"<<endl;
        else
            cout<<j<<" nao eh primo"<<endl;
    }

    return 0;
}
int prime(int j)
{
    int i,flag=1;

    for(i=2; i<=j/2; i++)
    {
        if(j%i==0)
        {
            flag=0;
            break;
        }
    }

    return flag;
}

#include<bits/stdc++.h>
using namespace std;

int prime(int n);
int main ()
{
    int j,flag;
    cin>>j;

    flag=prime(j);
    if(flag==1)
        cout<<j<<" is a prime number."<<endl;


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


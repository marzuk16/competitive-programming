#include<bits/stdc++.h>
using namespace std;

int prime(int n);
int main ()
{
    int n1,n2,i,flag;

    cout<<"Enter two positive integers: ";
    cin>>n1>>n2;
    cout<<"Prime numbers between "<<n1<<" and " <<n2<<" are: ";

    for(i=n1+1; i<n2; ++i)
    {
        flag =prime(i);

        if(flag == 1)
            cout<<i<<" " ;
    }
    cout<<endl;


    return 0;
}

int prime(int n)
{
    int j,flag=1;
    for(j=2; j<=n/2; j++)
    {
        if(n%j==0)
        {
            flag=0;
            break;
        }
    }

    return flag;
}

#include<bits/stdc++.h>
using namespace std;

int binaryExponentiation(int x, int n)
    {
        if(n==0)
            return 1;
        else if (n%2==0)
            return binaryExponentiation(x*x, n/2);
        else
            return x*binaryExponentiation(x*x, (n-1)/2);
    }

int main ()
{
    int prime,m,a;
    cout<<"Enter you number: ";
    cin>>prime;
    srand(time(NULL));
    while(1)
    {
        a=rand()%(prime-1);
        if(a>1)
        break;
    }

    m=binaryExponentiation(a, prime-1);
    if(m%prime==1)
        cout<<prime<<" is prime."<<endl;
    else
        cout<<prime<<" is not prime."<<endl;

    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main ()
{
    double n,a=0,b=0,c=1;

    while(1)
    {
        cin>>n;
        if(n<0)
            break;
        a+=n;
        b++;
    }
    c=(a/b);
    printf("%.2lf\n",c);

    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main ()
{
    double a[100],b;
    int i;

    cin>>b;
    a[0]=b;
    for(i=0; i<100; i++)
    {
        printf("N[%d] = %.4lf\n", i, a[i]);
        b/=2;
        a[i+1]=b;
    }
    return 0;
}

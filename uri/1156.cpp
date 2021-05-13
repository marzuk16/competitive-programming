#include<bits/stdc++.h>
using namespace std;

int main ()
{
    double i,s=0,b=1,c;
    for(i=1; i<=39; i+=2)
    {
        c=i/b;
        s+=c;
        b*=2;
    }
    printf("%.2lf\n",s);


    return 0;
}

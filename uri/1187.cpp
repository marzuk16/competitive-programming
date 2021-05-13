#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a=0.0, M[12][12];
    char T[2];
    int C,x,y,z,p=1,q=10;
    scanf("%s", &T);

    for(x=0;x<=11;x++)
    {
        for(y=0; y<=11; y++)
            scanf("%lf", &M[x][y]);
    }

    for(z=0; z<5;z++)
    {
        for(C=p; C<=q;C++)
            a+=M[z][C];
            p++;
            q--;
    }
    if(T[0]=='S')
        printf("%.1lf\n",a);
    else if(T[0]=='M')
    {
        a=a/30.0;
        printf("%.1lf\n",a);
    }
    return 0;
}




#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a=0.0, M[12][12];
    char T[2];
    int C,x,y,z,p=11,q=7;
    scanf("%s", &T);

    for(x=0;x<=11;x++)
    {
        for(y=0; y<=11; y++)
            scanf("%lf", &M[x][y]);
    }

    for(z=1; z<11;z++)
    {
        if(z<6)
        {
            for(C=11; C>=p;C--)
            a+=M[z][C];
            p--;
        }
        if(z>5)
        {
            for(C=q; C<=11; C++)
            {
                a+=M[z][C];
            }
            q++;
        }
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







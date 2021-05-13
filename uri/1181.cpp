#include<bits/stdc++.h>
using namespace std;

int main ()
{
    double sum=0,avg,l,m[12][12];
    int i,j;
    char c;

    cin>>l;
    cin>>c;
    for(i=0; i<12; i++)
    {
        for(j=0; j<12; j++)
        {
              cin>>m[i][j];
        }
    }
    for(i=l; i<=l; i++)
    {
        for(j=0; j<12; j++)
        {
            sum+=m[i][j];
        }
    }

    if(c=='S')
    {
        printf("%.1lf\n",sum);
    }
    if(c=='M')
    {
        printf("%.1lf\n",sum/12);
    }

    return 0;
}

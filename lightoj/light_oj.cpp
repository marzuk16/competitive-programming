#include<bits/stdc++.h>
using namespace std;

double arc(double x, double y, double z, double r)
{
    double theta, area;
    theta=acos((x*x+y*y-z*z)/(2.0*x*y));
    area=(r*r*theta)/2.0;
    return area;
}

int main()
{
    int t;
    cin>>t;
    double r1,r2,r3,x,y,z,s,triangle,extra,result;

    for(int i=1; i<=t; i++)
    {
        cin>>r1>>r2>>r3;

        x=r1+r2;
        y=r2+r3;
        z=r3+r1;

        s=(x+y+z)/2.0;
        triangle=sqrt(s*(s-x)*(s-y)*(s-z));
        extra=arc(y,z,x,r3)+arc(x,y,z,r2)+arc(z,x,y,r1);
        result=triangle-extra;

        printf("Case %d: %lf\n",i,result);
    }

    return 0;
}

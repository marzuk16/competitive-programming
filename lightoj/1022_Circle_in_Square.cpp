#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin>>test;
    for(int i=1; i<=test; i++)
    {
        double result,r;

        cin>>r;
        double square=(r+r)*(r+r);
        double circle=2*acos(0.0)*r*r;

        result = abs(circle-square);
        cout<<fixed<<setprecision(2)<<"Case "<<i<<": "<<result<<endl;
        //printf("Case %d: %.2lf\n",i,result);
    }

    return 0;
}

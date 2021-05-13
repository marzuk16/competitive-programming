#include<bits/stdc++.h>
using namespace std;

int main(){
    double v1, v2, v3, a1, a2, d, d1, d2, s, t, t1, t2;
    int test;
    cin>>test;
    for(int i=1; i<=test; i++)
    {
        cin>>v1>>v2>>v3>>a1>>a2;
        t1=v1/a1;
        t2=v2/a2;
        if(t1>t2)
        t=t1;
        else
        t=t2;
        s=v3*t;
        d1=v1*v1/(2*a1);
        d2=v2*v2/(2*a2);
        d=d1+d2;
        printf("Case %d: %.8lf %.8lf\n", i, d, s);
    }
    return 0;
}

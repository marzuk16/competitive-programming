#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin>>test;

    for(int i=1; i<=test; i++)
    {
        int lift,me,time;
        cin>>me>>lift;
        if(me<=lift)
            time = 19+lift*4;
        else
            time = 19+(2*me-lift)*4;

        cout<<"Case "<<i<<": "<<time<<endl;
    }

    return 0;
}

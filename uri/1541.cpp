#include<bits/stdc++.h>
using namespace std;

int main()
{

    int a,b,c,p,x=1,s;

    while(1)
    {
        cin>>a;

        if(a==0)break;

        else
        {
            cin>>b>>c;
            p=a*b*100/c;

            while(1)
            {
                if(x*x>p)break;
                s=x;
                x++;
            }
            cout<<s<<endl;
        }
        s=0;
        x=1;


    }

    return 0;
}

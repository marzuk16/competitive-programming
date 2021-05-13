#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,y,a,b=0;

    cin>>x>>y;

    for(a=1; a<=y; a++)
    {
        b++;
        if(b==x) cout<<a;
        else cout<<a<<" ";
        if(b==x)
        {
            b=0;
            cout<<endl;
        }
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;


int main()
{
    int x, a, b;
    while(cin >>x>>a>>b)
    {
        if (a<b)
        {
            if (x < b - a)
                cout<<"dangerous"<<endl;
            else
                cout<<"safe"<<endl;
        }
        else
            cout<<"delicious"<<endl;
    }

    return 0;
}
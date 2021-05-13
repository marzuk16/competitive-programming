#include<bits/stdc++.h>
using namespace std;

int main()
{

    int num,bit;
    cin>>num>>bit;

    for (int i = 0; i < num; i++)
    {
        for (int j = bit; j >= 0; j--)
        {
            if(i & (1<<j))
                cout<<1<<" ";
            else
                cout<<0<<" ";
        }
        cout<<endl;
        
    }

    return 0;
}
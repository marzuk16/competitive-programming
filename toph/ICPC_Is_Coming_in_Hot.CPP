#include<bits/stdc++.h>
using namespace std;

#define lld long long int

int main()
{
    string n;
    cin>>n;

    lld res[12];
    memset(res,0,sizeof(res));

    for(int i=0; i<n.size(); i++)
    {
        int x = n[i]-'0';
        res[x]++;
    }

    int min = -1,x;

    for(int i=0; i<10; i++)
    {
        if(res[i] > min)
        {
            min = res[i];
            x = i;
        }
    }
    cout<<x<<endl;

    return 0;
}

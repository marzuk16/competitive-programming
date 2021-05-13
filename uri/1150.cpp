#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,z,cnt=1;

    cin>>x;
    do
    {
        cin>>z;
    }
    while(z<=x);
    int sum=x;

    for(int i=x; ; i++)
    {
        sum+=i+1;
        cnt++;
        if(sum>=z)
            break;
    }

    cout<<cnt<<endl;


    return 0;
}

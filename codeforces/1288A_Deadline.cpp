#include<bits/stdc++.h>
using namespace std;

int day(int d, int x)
{
    if(d%(x+1))
        return (x+(d/(x+1))+1);
    else
        return (x+(d/(x+1)));
}

bool ternarySearch(int n, int d)
{
    int left = 1, right = n, mid1, mid2, res1, res2, diff, small = 2e9;

    while(abs(left - right)>100)
    {
        diff = abs(left-right);
        mid1 = (left+(diff/3) );
        mid2 = (left+ ( (diff*2) / 3 ) );

        res1 = day(d, mid1);
        res2 = day(d, mid2);

        //small = min(small, min(res1, res2));

        if(res1 < res2 )
            right = mid2 - 1;
        else if(res1 > res2)
            left = mid1 + 1;
        else
        {
            left = mid1;
            right = mid2;
        }
    }

    for(int i=left; i<=right; i++)
        small = min(small, day(d,i));

    if(small <= n)
        return true;
    else
        return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int test, n, d;
    cin>>test;

    while(test--)
    {
        cin>>n>>d;

        if(n >= d)
            cout<<"YES"<<endl;
        else
        {
            if(ternarySearch(n,d))
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }

    }

    return 0;
}
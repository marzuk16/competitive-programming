#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int test,a,b,c,n;
    cin>>test;

    while(test--)
    {
        cin>>a>>b>>c>>n;

        int mx = max(a, max(b,c));
        int sum = a+b+c;
        int tmp = abs((mx*3) - sum);

        if(tmp > n)
            cout<<"NO"<<endl;
        else
        {
            n -= tmp;

            if(n%3)
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
            
        }
        
    }
    

    return 0;
}

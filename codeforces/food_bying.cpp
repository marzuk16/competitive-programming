#include<bits/stdc++.h>
using namespace std;

int main()
{

    int test,n,x;
    cin>>test;

    while(test--)
    {
        cin>>n;
        x = n;
        int disc = 0, res = 0;

        while (n >= 10)
        {
            disc = n/10;
            res += disc;
            n = (n%10) + disc ;
            //cout<<"disc: "<<disc<<" n:"<<n<<endl;
        }

        cout<<(x+res)<<endl;
        
    }

    return 0;
}
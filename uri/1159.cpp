#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int n,i,sum=0,count=0;

    while(1)
    {
        cin>>n;

        if(n==0)
            break;
        else
        {
            if(n%2==0)
        {
            for(i=n; ; i+=2)
            {
                sum+=i;
                count++;
                if(count==5)
                    break;
            }
        }
        else
        {
            n++;
            for(i=n; ; i+=2)
            {
                sum+=i;
                count++;
                if(count==5)
                    break;
            }
        }
        cout<<sum<<endl;
        sum=0;
        count=0;
        }
    }

    return 0;
}

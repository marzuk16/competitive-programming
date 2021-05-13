#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int n,x,y,sum=0, a,i,count=0;

    cin>>n;

    for(a=1; a<=n; a++)
    {
        cin>>x>>y;
        if(x%2==1)
        {
            for(i=x; ; i+=2)
            {
                sum+=i;
                count++;
                if(count==y)
                    break;
            }
        }

        else
        {
            x++;
            for(i=x; ; i+=2)
            {
                sum+=i;
                count++;
                if(count==y)
                    break;
            }
        }
        cout<<sum<<endl;
        sum=0;
        count=0;
    }

    return 0;
}

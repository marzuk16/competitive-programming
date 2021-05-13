#include<bits/stdc++.h>
using namespace std;

bool prime(int n)
{
    int sum = 0;
    for(int i=2; i<=n/2; i++)
        if( !(n%i))
            return false;

    return true;
}

int main()
{
    int n;
    scanf("%d", &n);

    for(int i=1; i<=n; i++)
    {
        int x;

        if(i==n)
            scanf("%d", &x);
        else
            scanf("%d,", &x);
        //cerr<<x<<endl;

        if(x == 1)
        {
            printf("No\n");
            continue;
        }
        bool res;
        if(x > 17)
            res = false;
        else
        {
            int y = pow(2,x)-1;

            if(prime(x) && prime(y))
                res = true;
            else
                res = false;
//            int check = pow(2,x-1)*(pow(2,x)-1);
//            //cerr<<check<<endl;
//
//            res = perfect(check);
        }

        if(res)
            printf("Yes\n");
        else
            printf("No\n");
    }

    return 0;
}
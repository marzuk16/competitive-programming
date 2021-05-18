#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test,n,d,r;
    scanf("%d", &test);

    while(test--)
    {
        scanf("%d %d %d", &n, &d, &r);
        int dcnt = 0, rcnt = 0;

        int dav[n],rog[n];
        int david = 0,roger = 0;
        memset(dav,0,sizeof(dav));
        memset(rog,0,sizeof(rog));

        while(1)
        {
            david = ( david + d) % n;
            dcnt++;
            dav[david] = 1;
            roger = ( roger + r ) % n;
            rcnt++;
            rog[roger] = 1;

            if(dav[roger])
            {
                printf("%d\n", rcnt);
                break;
            }
            if(rog[david])
            {
                printf("%d\n", dcnt);
                break;
            }


        }
    }


    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,r,x;

    while(cin>>n>>r)
    {
        map<int,int> mp;
        map<int,int> :: iterator it;

        for(int i=1; i<=n; i++)
            mp[i]++;
        for(int i=1; i<=r; i++)
        {
            scanf("%d", &x);
            mp[x]++;
        }
        int x = 0,flag = 0;
        for( it = mp.begin(); it != mp.end(); it++)
        {
            if(it -> second == 1 )
            {
                flag = 1;
//                if( !x )
//                {
//                    x++;
//                    printf("%d", it -> first);
//                }
//                else
                    printf("%d ", it -> first);
            }
        }
        if( !flag )
            printf("*\n");
        else
            printf("\n");

    }

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

#define length 10000000

int prime[length];
vector<int>vec;

void sieve()
{
    memset(prime, -1, sizeof(prime));
    for(int i=2; i<=length; i++)
        if(prime[i])
            for(int j=2; i*j<=length; j++)
                prime[i*j] = 0;
}

pair<int, int> sol(int n)
{
    pair<int,int> info;
    int comp = 1e9,flag = 1;

    for(int dis=2; dis<=n; dis++)
    {
        int start = 0,sum = 0;

        for(int i=0; i<=n-dis; i++)
        {
            if( !i)
            {
                for(int j=0; j<dis; j++)
                    sum += vec[j];
            }
            else
                sum = (sum - vec[i-1]) + vec[i+dis-1];

            //cerr<<"sum: "<<sum<<endl;

            if(comp > dis && prime[sum])
            {
                //cerr<<"sum: "<<dis<<" ->"<<sum<<" ";
                info.first = start;
                info.second = dis;
                flag = 0;
                return info;
                //comp = sum;
            }
            start++;
        }
    }

    if(flag)
    {
        info.first = -1;
        info.second = 0;
    }

    return info;
}

int main()
{
    //freopen("input.txt","r",stdin);

    sieve();
//    for(int i=2; i<=100; i++)
//        if(prime[i])
//            cerr<<i<<" ";
//    return 0;

    int test,x,n;
    scanf("%d", &test);

    while(test--)
    {
        vec.clear();
        scanf("%d", &n);
        for(int i=1; i<=n; i++)
        {
            scanf("%d", &x);
            vec.push_back(x);
        }
        pair<int,int> info = sol(n);

        //cerr<<"start: "<<info.first<<endl;
        if( !info.second)
            printf("This sequence is anti-primed.\n");
        else
        {
            printf("Shortest primed subsequence is length %d:", info.second);
            for(int i=info.first; i<info.first+info.second; i++)
                printf(" %d", vec[i]);

            printf("\n");
        }
    }

    return 0;
}

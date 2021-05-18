#include<bits/stdc++.h>
using namespace std;

#define lld long long int

int main()
{
    int test,n;
    scanf("%d", &test);

    while(test--)
    {
        lld sum = 0,x,tmp,k;
        scanf("%d", &n);
        vector<int>v;
        for(int i=0; i<n; i++)
        {
            scanf("%lld", &x);
            v.push_back(x);
            sum += x;
        }
        sort(v.begin(), v.end());

        x = 1e9;
        int flag = 1;
        for(int i=1; i<=v[0]; i++)
        {
            for(int j=0; j<v.size(); j++)
            {
                if(v[j]%i != 0)
                {
                    flag = 0;
                    break;
                }
                else
                    flag = 1;
            }
            if( flag  && sum%i == 0)
            {
                //cerr<<"I "<<i<<endl;
                tmp = sum/i;
                //cerr<<"tmp: "<<tmp<<endl;
                if(x>tmp)
                {
                    k = i;
                    x = tmp;
                }
            }
        }
        printf("%lld %lld\n", k, x);

//        while(1)
//        {
//            if(sum%x == 0 && v[0]%x == 0)
//            {
//                int k = x;
//                int m = sum / x;
//                printf("%d %d\n", k, m);
//                break;
//            }
//            else
//                x--;
//        }
    }

    return 0;
}

#include<bits/stdc++.h>
using namespace std;
#define lld long long int

vector<int>vec;

lld big(lld x, lld y)
{
    if( x > y)
        return x;
    else
        return y;
}

lld solve()
{
    stack< pair<int,int> > stk;

    pair< int, int > top;
    pair< int, int > tmp;

    tmp.first = vec[0];
    tmp.second = 1;
    stk.push(tmp);

    lld res = tmp.first;

    for(int i=1; i<vec.size(); i++)
    {
        top = stk.top();

        tmp.first = vec[i];
        tmp.second = 1;

        int cnt = 0;
        while( !stk.empty() )
        {
            top = stk.top();

            if(top.first >= tmp.first)
            {
                cnt += top.second ;
                tmp.second += top.second;

                lld x = cnt*top.first;
                res = big(res, x);
//                cerr << cnt << " - " << top.first << endl ;
//                cerr << res << endl ;
                stk.pop();
            }
            else
                break;
        }
        stk.push(tmp);
    }

    //cerr<<"stk.size: "<<stk.size()<<endl;
    int cnt = 0;
    while( !stk.empty())
    {
        top = stk.top();

        cnt += top.second;

        lld x = cnt*top.first;
        res = big(res, x);
//        cerr <<"second "<< cnt << " - " << top.first << endl ;
//        cerr <<"second "<< res << endl ;

        stk.pop();
    }

    return res;
}

int main()
{
    int test,n,x;
    scanf("%d", &test);

    for(int T=1; T<=test; T++)
    {
        vec.clear();

        scanf("%d", &n);

        while(n--)
        {
            scanf("%d", &x);
            vec.push_back(x);
        }

        lld  res = solve();
        printf("Case %d: %lld\n",T, res);
    }

    return 0;
}
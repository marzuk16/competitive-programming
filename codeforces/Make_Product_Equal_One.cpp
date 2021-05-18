#include<bits/stdc++.h>
using namespace std;

#define lld long long int

int main()
{
    //freopen("input.txt", "r", stdin);

    lld test,zero=0,neg=0,pos=0,posSum=0,negSum=0,x,res=0;
    vector<lld>vec;
    scanf("%lld", &test);
    for(lld T=1; T<=test; T++)
    {
        scanf("%lld", &x);

        if( !x )
            zero++;
        else if(x > 0)
        {
            pos++;
            posSum += x;
        }
        else
            vec.push_back(x);
    }

    sort(vec.begin(), vec.end());

    if(vec.size() % 2 )
    {
        for(int i=0; i<vec.size()-1; i++)
        {
            if(vec[i] != -1)
                res += abs(vec[i])-1;
        }

        if(vec[vec.size()-1] == -1 && !zero)
            res += 2;
        else if(vec[vec.size()-1] == -1 && zero)
        {
            res += 1;
            zero--;
        }
        else if(vec[vec.size()-1] != -1 && zero)
        {
            res += abs(vec[vec.size()-1]);
            zero--;
        }
        else
            res += abs(vec[vec.size()-1])+1;
    }
    else
    {
        for(int i=0; i<vec.size(); i++)
        {
            if(vec[i] != -1)
                res += abs(vec[i])-1;
        }
    }

    res += zero + (posSum-pos);

    printf("%lld\n", res);

    return 0;
}

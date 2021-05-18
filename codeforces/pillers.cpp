#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("input.txt", "r", stdin);

    int n,x,tmp = -1,pos;
    scanf("%d", &n);
    vector<int>vec;
    for (int i=0; i<n; i++)
    {
        scanf("%d", &x);
        vec.push_back(x);

        if(tmp < x)
        {
            tmp = x;
            pos = i;
        }
    }

    int flag = 1;
    x = pos;
    while(x > 0)
    {
        if(vec[x] < vec[x-1])
        {
            flag = 0;
            break;
        }
        x--;
    }

    if(flag)
    {
        //cerr<<"KKK"<<endl;
        x = pos;
        while(x < vec.size())
        {
            if(vec[x] < vec[x+1] && (x+1) < vec.size())
            {
                //cerr<<"KKK"<<endl;
                flag = 0;
                break;
            }
            x++;
        }
    }

    if(flag)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}

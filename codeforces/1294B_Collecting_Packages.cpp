#include<bits/stdc++.h>
using namespace std;

struct info{
    int x,y;
}obj;

bool operator < (info a, info b)
{
    if(a.x == b.x)
    {
        if(a.y < b.y)
            return true;
        return false;
    }
    if(a.x < b.x)
        return true;
    else
        return false;
}

string mkstring(int n, char c)
{
    string s="";
    for(int i=1; i<=n; i++)
        s.push_back(c);

    return s;
}

void sol(int n, vector<info> v)
{
//  for(int i=0; i<n; i++)
//     cout<<v[i].x<<" "<<v[i].y<<endl;

    string s="";
    int f = 0;
    info bot,tmp;
    bot.x = 0;
    bot.y = 0;

    for(int i=0; i<n; i++)
    {
        tmp = v[i];
        if(bot.y > tmp.y)
        {
            f = 1;
            cout<<"NO"<<endl;
            break;
        }
        else
        {
            string t;
            int x = tmp.x - bot.x;
            int y = tmp.y - bot.y;

            t = mkstring(x, 'R');
            s += t;
            t = mkstring(y, 'U');
            s += t;

            bot = tmp;
        }
    }

    if(!f)
    {
        cout<<"YES"<<endl;
        cout<<s<<endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int test,n;
    cin>>test;

    while(test--)
    {
        vector<info>v;
        cin>>n;

        for(int i=1; i<=n; i++)
        {
            cin>>obj.x>>obj.y;
            v.push_back(obj);
        }
        sort(v.begin(), v.end());
        //cout<<"after sort"<<endl;
        sol(n, v);

//        for(int i=0; i<n; i++)
//            cout<<v[i].x<<" "<<v[i].y<<endl;
    }

    return 0;
}
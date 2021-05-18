#include<bits/stdc++.h>
using namespace std;

#define lld long long int
#define llu unsigned long long

int main()
{
    //freopen("input.txt", "w", stdin);

    string s,tmp;
    vector<string >ss;

    cin>>s;

    for(int i=1; i<=5; i++)
    {
        cin>>tmp;
        ss.push_back(tmp);
    }
    int flag = 0;

    for(int i=0; i<=4; i++)
    {
        tmp = ss[i];
        if(tmp[0] == s[0])
        {
            flag = 1;
            break;
        }

        if(tmp[1] == s[1])
        {
            flag = 1;
            break;
        }
    }

    if(flag)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
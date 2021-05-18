#include<bits/stdc++.h>
using namespace std;

#define lld long long int
#define llu unsigned long long

int main()
{
    //freopen("input.txt", "w", stdin);

    int n, one = 1e7, zero = 1e7;
    scanf("%d", &n);

    string s;
    cin>>s;

    vector<int>v(5,0);

    for(int i=0; i<s.size(); i++)
    {
        if(s[i] == 'e')
            v[0]++;
        else if(s[i] == 'r')
            v[1]++;
        else if(s[i] == 'n')
            v[2]++;
        else if(s[i] == 'o')
            v[3]++;
        else
            v[4]++;
    }

    int tmp = min(v[0], v[3]);
    //cerr<<"tmp: "<<tmp<<endl;
    one = min(tmp, v[2]);
    //cerr<<"one: "<<one<<endl;
    zero = min(v[4], v[1]);
    //cerr<<"zero: "<<zero<<endl;

    if(tmp > one)
        zero = min((tmp-one), zero);
    else
        zero = 0;

    for(int i=1; i<=one+zero; i++)
    {
        if(i <= one)
            printf("%d ", 1);
        else
            printf("%d ", 0);
    }
    printf("\n");



    return 0;
}

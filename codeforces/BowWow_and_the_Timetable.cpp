#include<bits/stdc++.h>
using namespace std;

#define lld long long int

int main()
{
    //freopen("input.txt", "r", stdin);

    string test;
    cin>>test;

    int flag = 1;

    for(int i=1; i<test.size(); i++)
    {
        if (test[i] != '0')
        {
            flag = 0;
            break;
        }
    }

//    if((flag && test.size()%2) || flag)
//        cout<<test.size()/2<<endl;
    if(!flag && test.size()%2)
        cout<<(test.size()/2)+1<<endl;
    else
        cout<<test.size()/2<<endl;

    return 0;
}

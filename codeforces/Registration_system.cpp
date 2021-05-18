#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    map<string , int> mp;
    //map<string , int> :: iterator it;
    string s;

    scanf("%d", &n);

    while(n--)
    {
        cin>>s;

        mp[s]++;

        //it = mp[s];

        if(mp[s] > 1)
        {
            int x = mp[s] - 1;

            string ss;
            //cerr<<"X:"<<x<<endl;
            while( x )
            {
                char a = (x)%10 + 48;
                x /= 10;
                ss.push_back(a);
            }
            reverse(ss.begin(), ss.end());

            s += ss;
            //char x = (mp[s] - 1) + 48;
            //s.push_back(x);
            cout<<s<<endl;

            mp[s]++;
        }
        else
            cout<<"OK"<<endl;
    }


    return 0;
}

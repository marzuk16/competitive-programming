#include <bits/stdc++.h>
using namespace std;

void sol(int p, int c)
{
    char ch;
    list<int> ls;

    p = min(p, c);

    for (int i = 1; i <= p; i++) ls.push_back(i);

    for (int i = 1; i <= c; i++)
    {
        cin>>ch;
        if (ch == 'N')
        {
            cout << ls.front() << endl;
            ls.push_back(ls.front());
            ls.pop_front();
        }
        else
        {
            int tmp;
            cin >> tmp;
            ls.remove(tmp);
            ls.push_front(tmp);
            //int tmp = s[2] - '0';
            //cout<<s<<" tmp: "<<tmp<<endl;
/*             for (it = ls.begin(); it != ls.end(); it++)
            {
                if (*it == tmp)
                {
                    ls.erase(it);
                    break;
                }
            }
            ls.push_front(tmp); */
            //cout<<"front: "<<ls.front()<<endl;
        }
    }
}

int main()
{
    int p, c, cas = 0;
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    while (cin >> p >> c && (p && c)){
        cout<<"Case "<<++cas<<":"<<endl;
        sol(p, c);
    }

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

#define lld long long int
#define llu unsigned long long

int operation(string s)
{
    int op;
    if(s[0] == 'p' && s[1] == 'o')
    {
        if(s[3] == 'L')
            op = 1; //popLeft
        else
            op = 2; //popRight
    }
    else
    {
        if(s[4] == 'L')
            op = 3; //pushLeft
        else
            op = 4; //pushRight
    }

    return op;
}
void sol(int T, int n, int m)
{
    deque<int>dq;

    printf("Case %d:\n", T);

    while(m--)
    {
        string s;
        cin>>s;

        int num, tmp;
//        if(s[s.size()-2] == '-')
//            num -=  s[s.size()-1] - '0';
//        else
//            num =  s[s.size()-1] - '0';

        int op = operation(s);
        int sz = 0;

        if(op == 1)
        {
            if(dq.empty())
                printf("The queue is empty\n");
            else
            {
                tmp = dq.front();
                dq.pop_front();
                printf("Popped from left: %d\n", tmp);
                //sz--;

            }
        }
        else if(op == 2)
        {
            if(dq.empty())
                printf("The queue is empty\n");
            else
            {
                tmp = dq.back();
                dq.pop_back();
                printf("Popped from right: %d\n", tmp);
                //sz--;
            }
        }
        else if(op == 3)
        {
            scanf("%d", &num);

            if(dq.size() == n)
                printf("The queue is full\n");
            else
            {
                dq.push_front(num);
                printf("Pushed in left: %d\n", num);
                //sz++;
            }
        }
        else
        {
            scanf("%d", &num);

            if(dq.size() == n)
                printf("The queue is full\n");
            else
            {
                dq.push_back(num);
                printf("Pushed in right: %d\n", num);
                //sz++;
            }
        }

    }
}

int main()
{
    //freopen("input.txt", "w", stdin);

    int test;
    scanf("%d", &test);
    for(int T=1; T<=test; T++)
    {
        int n,m;
        scanf("%d %d", &n, &m);

        sol(T, n, m);
    }
    return 0;
}
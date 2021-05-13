#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,k,test,i;
    cin>>test;
    for(t=1;t<=test;t++)
    {
        queue<int>q;
        cin>>n>>k;
        for(i=1;i<=n;i++)
        {
            q.push(i);
        }
        while(q.size()>1)
        {
            for(i=1;i<k;i++)
            {
                int tmp=q.front();
                q.pop();
                q.push(tmp);
            }
            q.pop();
        }
        cout<<"Case "<<t<<": "<<q.front()<<endl;
    }

    return 0;
}

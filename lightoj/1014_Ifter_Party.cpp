#include<bits/stdc++.h>
using namespace std;

/*int prime(long long int n)
{
    int flag=1;
    for(int i=2; i<=sqrt(n); i++)
    {
        if(n%i==0)
        {
            flag=0;
            break;
        }
    }
    return flag;
}*/
int main()
{
    int test,chk;
    cin>>test;

    for(int i=1; i<=test; i++)
    {
        long long int p,l,q,s;
        cin>>p>>l;
        q=p-l;
        //vector<long long int>v;
        set<long long int >v;
        set<long long int> :: iterator it;
        if(l<q)
        {
            //chk=prime(q);
            //if(v.size())
                //cout<<"Case "<<i<<": "<<q<<endl;
            //v.push_back(1);
            for(s=1; s<=sqrt(q); s++)
            {
                if(q%s==0)
                {
                    if(s>l)
                        //v.push_back(s);
                        //v.push_back(q/s);
                        v.insert(s);
                    if(q/s>l)
                        v.insert(q/s);
                }
            }
            //if(s*s == q && s>l)
                //v.insert(s);
            //sort(v.begin(),v.end());

            cout<<"Case "<<i<<":";
            for(it = v.begin(); it != v.end(); it++)
            {
                //if(it == v.begin())
                    //cout<<*it;
                //else
                    cout<<" "<<*it;
            }
            cout<<endl;
        }
        else
            cout<<"Case "<<i<<": impossible"<<endl;

    }

    return 0;
}

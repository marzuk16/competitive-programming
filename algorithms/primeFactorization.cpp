#include<bits/stdc++.h>
using namespace std;

#define size 100000

int prime[size];

void sieve()
{
    //memset(prime, -1, sizeof(prime));
    for(int i=2; i<size; i++)
        if( !prime[i])
            for(int j=2; i*j<size; j++)
                prime[i*j] = 1;

//    for(int i=2; i<size; i++)
//        if( !prime[i])
//            cout<<i<<" ";

}
void primeFactor(int n)
{
    map<int,int>mp;
    map<int,int>::iterator it;

    for(int i=2; i<=sqrt(n); i++)
    {
        if( !prime[i])
        {
            while( !(n%i))
            {
                n /= i;
                mp[i]++;
            }

        }
    }
    if(n>1)
        mp[n]++;

    for(it = mp.begin(); it != mp.end(); it++)
        cout<<it->first<<"^"<<it->second<<endl;

}

int main()
{
    sieve();
    int n;
    while(cin>>n)
    {
        if( !prime[n])
            printf("%d\n", n);
        else
            primeFactor(n);
    }

    return 0;
}

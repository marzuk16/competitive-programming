#include<bits/stdc++.h>
using namespace std;

int jos(int n, int k)
{
    int x = log2(n);
    //cerr<<"X:"<<x<<endl;
    return  2*(n-pow(2,x))+1;
//    if(n==1)
//        return 1;
//    else
//        return (jos(n-1, k) + k-1) % n + 1;
}

int cal(int surv, int n)
{
    int cost;
//    if(n==surv)
//        cost = n*2;
//    else
//    {
//        cost = (n-surv);
//    }

    return cost = n-surv;
}
int main()
{
    int n;

    while(cin>>n)
    {
        int cost = 0;
        int surv = -1;
        while(1)
        {
            surv = jos(n, 2);
            if(n==surv)
                break;
            //cerr<<"surv "<<surv<<endl;

            cost += cal(surv, n);

            n = surv;
        }
        cost += n*2;
        cout<<cost<<endl;
    }

    return 0;
}
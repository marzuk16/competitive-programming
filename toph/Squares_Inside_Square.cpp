#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    unsigned long long int n;
    scanf("%d", &test);


    while(test--)
    {
        cin>>n;

        unsigned long long int  res = (n*(n + 1)*( (2*n) + 1))/6;
        cout<<res<<endl;
    }

    return 0;
}

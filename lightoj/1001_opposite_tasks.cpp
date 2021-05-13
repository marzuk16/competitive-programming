#include<iostream>
using namespace std;

int main()
{
    int test,a,b=0,c,d;
    cin>>test;

    while(test--)
    {
        cin>>a;
        if(a<=10)
        {
            b=0;
            cout<<b<<" "<<a<<endl;
        }
        else
        {
            b=a-10;
            c=10;
            cout<<b<<" "<<c<<endl;

        }
    }

    return 0;
}
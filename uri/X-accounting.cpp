#include<bits/stdc++.h>
using namespace std;

int main()
{

    long a,b,n;
    cin>>a>>b>>n;

    int x;

    if(a== 0 && b == 0)
    {
        cout<<"5"<<endl;
    }
    else if(a == 0 && b != 0)
    {
        cout<<"No solution"<<endl;
    }
    else if(a != 0 && b == 0)
    {
        cout<<"0"<<endl;
    }
    else if(b % a != 0)
    {
        cout<<"No solution"<<endl;
    }
    else if(a * b < 0 && (n % 2 == 0))
    {
        cout<<"No solution"<<endl;
    }
    else
    {
        int outputSign = 2 * (a * b > 0) - 1;
        int sol = outputSign * pow(1.0 * outputSign * b / a, 1.0 / n);

        if(sol-(int)sol!=0)
        cout<<"No solution"<<endl;
        else
        cout<<sol<<endl;

    }

    return 0;
}

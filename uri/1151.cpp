#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int i,no, first=0, second=1, next;

    cin>>no;
    for(i=1; i<=no; i++)
    {

        if(i==no)
        {
            cout<<first;
            break;
        }
        cout<<first<<" ";
        next = first + second;
        first = second;
        second = next;
    }
    cout<<endl;

    return 0;
}

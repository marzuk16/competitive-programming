#include<bits/stdc++.h>
using namespace std;

int main ()
{
    double n,s=0,media=0,c=0;

    while(1)
    {

        if(c==2)
            break;
        cin>>n;
        if(n>=0 && n<=10)
        {
            c++;
            s+=n;

        }
        else
            cout<<"nota invalida"<<endl;
    }


    media=s/2.00;

            cout<<"media = "<<media<<endl;

    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    long long int number,layer,lmax,lmin,row,column;
    cin>>test;
    for(int i=1; i<=test; i++)
    {
        cin>>number;
        double srt = sqrt(number);

        if(srt-int(srt) == 0)
        {
            layer = srt;
        }
        else
            layer = int(srt)+1;

        lmax = layer*layer;
        lmin = pow((layer-1),2)+1;

        if(layer%2 == 0)
        {
            column = abs(lmin-number)+1;
            row = abs(lmax-number)+1;
        }
        else
        {
            column = abs(lmax-number)+1;
            row = abs(lmin-number)+1;
        }

        if(column > layer)
        {
            column = layer;
        }
        if(row >layer)
        {
            row = layer;
        }

        cout<<"Case "<<i<<": "<<column<<" "<<row<<endl;

    }


    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,j,k=1,l;

    while(1)
    {
        cin>>t;
        int ar[t][t];
        if(t==0)break;
        else
        {
            for(i=0; i<t; i++)
            {
                l=k;
                for(j=0; j<t; j++)
                {
                    ar[i][j]=l;
                    l+=l;
                }
                k+=k;
            }
            k=1;
        }

        for(i=0; i<t; i++)
        {
            for(j=0; j<t; j++)
            {
                cout<<ar[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }

    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int n,x,i,comp=0,index;
    cin>>n;
    int a[n];

    for(i=0; i<n; i++)
    {
        cin>>a[i];
        if(comp>a[i])
        {
            comp=a[i];
            index=i;
        }
    }
    cout<<"Menor valor: "<<comp<<endl<<"Posicao: "<<index<<endl;

    return 0;
}

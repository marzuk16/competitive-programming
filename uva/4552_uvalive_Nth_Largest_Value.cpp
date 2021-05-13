#include<bits/stdc++.h>
using namespace std;

int main()
{
    int p,n,x=0;
    cin>>p;
    int arr[p][2];
    for(int i=1; i<=p; i++)
    {
        vector<int>vi;
        for(int j=0; j<=10; j++)
        {
            cin>>n;
            vi.push_back(n);
        }
        sort(vi.begin()+1, vi.end());
        int bi=vi[0];
        int si=vi.size();
        int ssi=vi[si-3];

        for(int i=x; i<p; i++)
        {
            for(int j=0; j<2; j++)
            {
                if(j==1)
                arr[i][j]=ssi;
                else
                arr[i][j]=bi;
            }
            break;
        }
        x++;
    }

    for(int i=0; i<p; i++)
        {
            for(int j=0; j<2; j++)
            {
                if(j==0)
                cout<<arr[i][j]<<" ";
                else
                cout<<arr[i][j];
            }
            cout<<endl;
        }

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int eggs,a,g,acost=0,gcost=0;
    string s;
    scanf("%d",&eggs);
    for(int i=0; i<eggs; i++)
    {
        scanf("%d %d", &a, &g);

//        int aa=min(a,g);
//        int gg=max(a,g);
        acost+=a;
        if(abs(acost-gcost)<=500)
        {

            s.push_back('A');
        }
        else
        {
            acost-=a;
            gcost+=g;
            s.push_back('G');
        }
    }
    cout<<s<<endl;


    return 0;
}

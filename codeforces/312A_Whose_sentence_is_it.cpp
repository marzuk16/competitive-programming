#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;

    scanf("%d", &n);
    getline(cin,s);

    while(n--)
    {
        getline(cin,s);

        int Freda = 0, Rainbow = 0;

        if(s.size() >= 5)
        {

            if(s.substr(s.size() - 5,5) == "lala.")
                Freda = 1;
            if(s.substr(0,5) == "miao.")
                Rainbow = 1;
        }

        if(Freda && !Rainbow)
            printf("Freda's\n");
        else if(!Freda && Rainbow)
            printf("Rainbow's\n");
        else
            printf("OMG>.< I don't know!\n");
    }

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a=1,b=1, n,c;
    scanf("%d", &n);
    if(n<3)
        printf("%d\n", 1);
    else
    {
        for(int i=1; i <= (n-2); i++)
        {
            c = a+b;
            a = b;
            b = c;
        }

        printf("%d\n", c);
    }


    return 0;
}

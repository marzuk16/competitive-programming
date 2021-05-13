#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int test,total=0,n,rat=0,frog=0,rabbit=0;
    char ch;

    cin>>test;

    while(test--)
    {
        cin>>n>>ch;
        total+=n;

        if(ch=='C')
        {
            rabbit+=n;
            n=0;
        }
        if(ch=='R')
        {
            rat+=n;
            n=0;
        }
        if(ch=='S')
        {
            frog+=n;
            n=0;
        }

    }
    float per_rabbit=(float)rabbit/(float)total*100.00;
    float per_rat=(float)rat/(float)total*100.00;
    float per_frog=(float)frog/(float)total*100.00;
    printf("Total: %d cobaias\nTotal de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\nPercentual de coelhos: %.2f %c\nPercentual de ratos: %.2f %c\nPercentual de sapos: %.2f %c\n",total,rabbit,rat,frog,per_rabbit,'%',per_rat,'%',per_frog,'%');


    return 0;
}

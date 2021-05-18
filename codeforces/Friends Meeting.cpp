#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,sum,target,i,j,result,result1=0,result2=0,a1,b1;
    cin>>a>>b;
    if(a-b==1 || b-a==1)cout<<"1"<<endl;
    else
    {
        sum=a+b;
        if(sum%2!=0)
        {
            target=(sum/2)+1;
        }
        else
            target=sum/2;
        a1=abs(a-target);
        b1=abs(b-target);
        for(i=1; i<=a1; i++)
        {
            result1+=i;
        }
        for(j=1; j<=b1; j++)
        {
            result2+=j;
        }
        result=result1+result2;

        cout<<result<<endl;
    }

    return 0;
}

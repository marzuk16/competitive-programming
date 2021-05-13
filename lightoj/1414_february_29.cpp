#include<bits/stdc++.h>
using namespace std;

int main()
{
    int day1,day2,year1,year2,test,i,ly,x,y,z;
    string month1,month2;
    char c;

    cin>>test;

    for(i=1; i<=test; i++)
    {
        cin>>month1>>day1>>c>>year1;
        cin>>month2>>day2>>c>>year2;
        ly=0;

        if(month1=="January" || month1=="February")
        {
            year1=year1;
        }
        else
        {
            year1++;
        }
        if(month2=="January" || (month2=="February" && day2<29))
        {
            year2--;
        }

        x=(year2/4)-((year1-1)/4);
        y=(year2/100)-((year1-1)/100);
        z=(year2/400)-((year1-1)/400);
        ly=(x-y+z);

        cout<<"Case "<<i<<": "<<ly<<endl;
    }


    return 0;
}

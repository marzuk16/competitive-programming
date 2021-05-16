#include<bits/stdc++.h>
using namespace std;

int leapYear(int n)
{
       string month1 = "September";
       int day1 = 22;
       int year1 = 1867;
       string month2 = month1;
       int day2 = day1;
       int year2 = 1867+n;

       int ly=0;

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

       int x=(year2/4)-((year1-1)/4);
       int y=(year2/100)-((year1-1)/100);
       int z=(year2/400)-((year1-1)/400);
        ly=(x-y+z);

        return ly;
}

int sol(int n, int leap)
{
    return ((((n-leap)*365)+(leap*366))%7);
}
int main()
{
    vector<string >day;

    int n;
    scanf("%d", &n);

    int leap = leapYear(n);
    int res = sol(n,leap);

    day.push_back("Sunday");
    day.push_back("Monday");
    day.push_back("Tuesday");
    day.push_back("Wednesday");
    day.push_back("Thursday");
    day.push_back("Friday");
    day.push_back("Saturday");

    cout<<day[res]<<endl;

    return 0;
}
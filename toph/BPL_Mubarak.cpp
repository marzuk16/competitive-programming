#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    scanf("%d", &test);

    while(test--)
    {
        int ball = 0,over=0;
        string s;
        cin>>s;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='O')
                ball++;
            else
            {
                int x = s[i]-'0';
                //cerr<<"x:"<<x<<endl;
                if(x>=0 && x<=6)
                    ball++;
            }
        }
        //cerr<<"ball:"<<ball<<endl;
        if (ball > 5)
            over = ball / 6;
        ball %= 6;
        if(over && ball)
        {
            if(over>1 && ball>1)
                printf("%d OVERS %d BALLS\n", over, ball);
            else if(over > 1 && ball == 1)
                printf("%d OVERS %d BALL\n", over, ball);
            else if(over == 1 && ball>1)
                printf("%d OVER %d BALLS\n", over, ball);
            else
                printf("%d OVER %d BALL\n", over, ball);
        }
        else if( !over && ball )
        {
            if(ball>1)
                printf("%d BALLS\n", ball);
            else
                printf("%d BALL\n", ball);
        }

        else if(over && !ball)
        {
            if(over>1)
                printf("%d OVERS\n", over);
            else
                printf("%d OVER\n", over);
        }
//        else
//            printf("%d BALL\n",0);

    }


    return 0;
}

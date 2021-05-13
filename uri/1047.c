#include<stdio.h>

int main ()
{
    int start_hour,start_minute,end_hour,end_minute,result_hour,result_minute;

    scanf("%d %d %d %d",&start_hour,&start_minute,&end_hour,&end_minute);

    result_hour=end_hour-start_hour;
    if(result_hour<0)
    {
        result_hour=24+(end_hour-start_hour);
    }

    result_minute=end_minute-start_minute;
    if(result_minute<0)
    {
        result_minute=60+end_minute-start_minute;

        result_hour--;
    }
    if(start_hour==start_minute && end_hour==end_minute)
    {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else

        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", result_hour, result_minute);


    return 0;
}

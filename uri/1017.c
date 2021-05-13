#include<stdio.h>

int main ()
{

    int time, avg_speed;
    float spent_fuel;

    scanf("%d",&time);
    scanf("%d",&avg_speed);

    spent_fuel=((time*avg_speed)/12);

    printf("%.3f\n",spent_fuel);

    return 0;
}

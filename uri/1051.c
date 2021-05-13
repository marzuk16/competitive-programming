#include <stdio.h>
int main()
{
   double money,taxes;
    scanf("%lf", &money);
    if(money>=0 && money<=2000)
        printf("Isento\n");
    else if(money>=2000.01 && money<=3000)
    {
        money-=2000;
        taxes= money*.08;
        printf("R$ %.2lf\n",taxes);
    }
    else if(money>=3000.01 && money<=4500)
    {
        money-=3000;
        taxes= money*.18+80;
        printf("R$ %.2lf\n",taxes);
    }
    else
    {
        money-=4500;
        taxes= money*.28+350;
        printf("R$ %.2lf\n",taxes);
    }
    return 0;
}

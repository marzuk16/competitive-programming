#include<stdio.h>
#include<math.h>

int main ()
{
    float a,b,c,del,r1,r2;

    scanf("%f %f %f",&a,&b,&c);

    del=((b*b)-4*a*c);

    r1=(-b+sqrt(del))/(2*a);
    r2=(-b-sqrt(del))/(2*a);

    if(a!=0 && del>0)
    {
        printf("R1 = %.5f\nR2 = %.5f\n",r1,r2);
    }
    else
        printf("Impossivel calcular\n");


    return 0;
}


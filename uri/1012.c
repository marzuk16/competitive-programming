#include<stdio.h>

int main ()
{
    double a,b,c;

    scanf("%lf %lf %lf",&a,&b,&c);

    printf("TRIANGULO: %0.3lf\n",(a*c)/2);
    printf("CIRCULO: %0.3lf\n",(c*c*3.14159));
    printf("TRAPEZIO: %0.3lf\n",((a+b)/2)*c);
    printf("QUADRADO: %0.3lf\n",b*b);
    printf("RETANGULO: %0.3lf\n",a*b);

    return 0;
}

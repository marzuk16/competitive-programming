#include<stdio.h>

int main ()
{
    double A=1;
    double n= 3.14159;
    double R;

    scanf("%lf",&R);

    A=n*(R*R);

    printf("A=%0.4lf\n",A);

    return 0;
}

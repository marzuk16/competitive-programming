#include <stdio.h>

int main()
{
    int i,j;
            for (i=2; i<100; i++)
            {
                for (j=2; j<=i; j++)
                {
                    if (i == j)
                    printf("%d\n",i);
                    else if (i%j == 0)
                    break;
                }
            }

     return 0;
}

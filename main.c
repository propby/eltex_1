#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int a;
    unsigned char c;
    scanf("%d",&a);
    unsigned char mass[sizeof(int)*8];
    for (int i = 3,j = 31; i >= 0;i--)
    {

            c = (a << i*8) >> 24;

            printf ("%d\n",c);
            for (int p = 0;p < sizeof(char)*8;p++,j--)
            {
            mass[j] = c %2;
            c/=2;
            printf ("%d ",j);
            }
             printf ("\n");


    }
    for (int i = 0;i < 32;i++)
    {
        printf ("%d",mass[i]);
    }
    return 0;
}

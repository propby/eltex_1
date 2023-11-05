#include <stdio.h>
#include <stdlib.h>

#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Russian");
    unsigned char bit;
    printf ("На что поменять третьий бит (1 или 0) ?:");
    scanf("%d",&bit);
    unsigned int num;
    printf ("Число:");
    scanf("%d",&num);

      switch (bit)
      {
      case 0:
        num-=4;
        break;
      case 1:
        num+=4;
        break;
      default:
        return 0;
      }

    printf ("Измененое число:");
    printf ("%d",num);
    return 0;
}


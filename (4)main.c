#include <stdio.h>
#include <stdlib.h>

#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Russian");
    unsigned char bit;
    printf ("Change bit to what? (1 или 0) ?:");
    scanf("%d",&bit);
    unsigned int num;
    printf ("Enter number:");
    scanf("%d",&num);

      switch (bit)
      {
      case 0:
        num = num & (~(1<<2));
        break;
      case 1:
        num = num | (1<<2) ;
        break;
      default:
        return 0;
      }

    printf ("answer:");
    printf ("%d",num);
    return 0;
}


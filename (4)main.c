#include <stdio.h>
#include <stdlib.h>

#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Russian");
    unsigned char bit;
    printf ("Íà ÷òî ïîìåíÿòü òðåòüèé áèò (1 èëè 0) ?:");
    scanf("%d",&bit);
    unsigned int num;
    printf ("×èñëî:");
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

    printf ("Èçìåíåíîå ÷èñëî:");
    printf ("%d",num);
    return 0;
}


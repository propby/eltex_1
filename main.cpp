#include <stdio.h>
#include <stdlib.h>

#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Russian");
    unsigned char bit;
    printf ("�� ��� �������� ������� ��� (1 ��� 0) ?:");
    scanf("%d",&bit);
    unsigned int num;
    printf ("�����:");
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

    printf ("��������� �����:");
    printf ("%d",num);
    return 0;
}


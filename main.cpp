#include <stdio.h>
#include <stdlib.h>

#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Russian");
    unsigned int a;
    printf ("������� �����:");
    scanf("%d",&a);int counter = 0;
    for (int i = 0; i < sizeof(int)*8;i++)
    {
      switch (a%2)
      {
      case 1:
        counter++;
      default:
        a/=2;
        break;
      }

    }
    printf ("����� ������:");
    printf ("%d",counter);
    return 0;
}


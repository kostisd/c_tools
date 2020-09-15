// Kostis Dimos 2020
// Converting a decimal to binarty
// No input validation yet

#include <stdio.h>
#include <ctype.h>

int int2binary(int x)
  {
    int binaryNum[1000];
    int mod;
    int i = 0;
    if (isdigit(x) == 1)
      {
        printf("Please provide a valid integer!");
        return 0;
      }

    if (x == 0)
      {
        printf("%d", 0);
        return 0;
      }

    while (x > 0)
      {
      mod = x % 2;
      binaryNum[i] = mod;
      i++;
      x = x / 2;
      }
    for (int y = i - 1; y >= 0; y-- )
      {
        printf("%d", binaryNum[y]);
      }
    return 0;
  }


int main(void)
  {
    int x;
    printf("Type your integer : ");
    scanf("%d", &x);
    printf("Decimal: %d\n", x);
    printf("Binary: ");
    int2binary(x);
    printf("\n");
    return 0;
  }

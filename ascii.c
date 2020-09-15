#include <stdio.h>

void print_ascii(int x)
  {
    if (x < 0 || x > 255)
      {
      printf("Not a valid ASCII code.\n");
      printf("Please provide a number between 0 and 255\n");
      }
    else
    {
      printf("The ASCII symbol for code %d is: %c \n", x, x );
    }
  }

int main()
  {
    int x;
    printf("Type your ASCII code: ");
    scanf("%d", &x);
    print_ascii(x);
  }

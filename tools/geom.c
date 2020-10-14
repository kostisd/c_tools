#include <stdio.h>
#include <math.h>

int term;
double first, sum, ratio;

void findSum();
void findFirst();

int main(){
  int missing;

  printf("Which parameter are you looking for?\n");
  printf("1. sum\n2. first term\n");
  printf("Enter your answer: ");
  scanf("%d", &missing);
  if (missing == 1)
    findSum();
  else if (missing == 2)
    findFirst();
  else
    printf("Invalid choice. Please try again!\n");
}

void findSum(){
  printf("First term: ");
  scanf("%lf", &first);
  printf("Term: ");
  scanf("%d", &term);
  printf("Ratio: ");
  scanf("%lf", &ratio);
  sum = first * ((1-pow(ratio, term)) / (1-ratio));
  printf("Sum = %.2lf\n", sum);
}

void findFirst(){
  printf("Sum: ");
  scanf("%lf", &sum);
  printf("Term: ");
  scanf("%d", &term);
  printf("Ratio: ");
  scanf("%lf", &ratio);
  first = sum / ((1-pow(ratio, term))/(1-ratio));
  printf("First term = %.2lf\n", first);
}

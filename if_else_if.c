#include <stdio.h>
int main() {
  int num;

  printf("Enter your number:");
  scanf("%d", &num);
  if (num == 1) {
    printf("number is 1");
  }

  else if (num == 2)

  {
    printf("number is two");
  } else {
    printf("its not 1 and 2");
  }

  return 0;
}
#include <stdio.h>

int main(void) {
  int day;
  printf("Enter day(1-7): ");
  scanf("%d", &day);
  printf("\n");
  printf("------------------\n");
  printf("\n");

  switch (day) {
  case 1:
    printf("Today is Monday.\n");
    break;

  case 2:
    printf("Today is Tuesday.\n");
    break;

  case 3:
    printf("Today is Wednesday.\n");
    break;

  case 4:
    printf("Today is Thursday.\n");
    break;

  case 5:
    printf("Today is Friday.\n");
    break;

  case 6:
    printf("Today is Saturday.\n");
    break;

  case 7:
    printf("Today is Sunday.\n");
    break;

  default:
    printf("Not a valid day!\n");
  }
  printf("\n");
  printf("------------------\n");
  return 0;
}
#include <stdio.h>
#include <ctype.h>

void main() {

  int a, b, c, s = 0;
  printf("AAAA : ");
  scanf("%d", &a);

  c = a;

  while (a > 0)
  {
      b = a % 10;
      s = (s * 10) + b;
      a = a / 10;
  }

  printf("%d", s);
}
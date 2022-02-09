// 12S21015 - Sitogab Antonio Octavianus Girsang
// 12S21049 - Jesika Audina Purba

#include <stdio.h>

int main(int _argv, char **_argc)
{
  int x, y, z, a, b, hasil;
  printf(": ");
  scanf("%d", &x);
  printf(": ");
  scanf("%d", &y);
  hasil = x >> y;
  printf("%d\n", hasil);

  printf(": ");
  scanf("%d", &z);
  a = hasil;
  b = a >= z;
  printf("%d\n", b);


  return 0;
}

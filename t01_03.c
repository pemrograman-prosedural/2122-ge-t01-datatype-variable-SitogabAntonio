// 12S21015 - Sitogab Antonio Octavianus Girsang
// 12S21049 - Jesika Audina Purba

#include <stdio.h>

int main(int _argv, char **_argc)
{
  int x, y, z, a, b, hasil;
  printf("masukkan angka: ");
  scanf("%d", &x);
  printf("masukkan angka: ");
  scanf("%d", &y);
  hasil = x >> y;
  printf("Right shifted by y = %d\n", hasil);

  printf("masukkan angka: ");
  scanf("%d", &z);
  a = hasil;
  b = a >= z;
  printf("equality operation = %d\n", b);

  
  return 0;
}

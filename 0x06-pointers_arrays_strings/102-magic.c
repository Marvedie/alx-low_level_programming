#include <stdio.h>

int main(void)
{
  int n;
  int a[5];
  int *p;

  a[2] = 1024;
  p = &n;

  /* You are not allowed to use 'a', but you can access the 2nd element using pointer arithmetic */
  *(p + 2) = 98;

  /* This will print 98 */
  printf("a[2] = %d\n", a[2]);
  return (0);
}

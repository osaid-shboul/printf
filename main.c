#include <stdio.h>
#include "ft_printf.h"

int main(void)
{
  int len1, len2;
  char c = 'A';
  char *str = "Hello, 42!";
  int n = -12345;
  unsigned int u = 4294967295;
  void *ptr = str;

  // char
  printf("---- Testing printf ----\n");
  len1 = printf("char: %c\n", c);
  printf("printed %d characters\n\n", len1);

  printf("---- Testing ft_printf ----\n");
  len2 = ft_printf("char: %c\n", c);
  printf("printed %d characters\n\n", len2);

  // string
  printf("---- Testing printf ----\n");
  len1 = printf("str: %s\n", str);
  printf("printed %d characters\n\n", len1);

  printf("---- Testing ft_printf ----\n");
  len2 = ft_printf("str: %s\n", str);
  printf("printed %d characters\n\n", len2);

  // int
  printf("---- Testing printf ----\n");
  len1 = printf("int: %d\n", n);
  printf("printed %d characters\n\n", len1);

  printf("---- Testing ft_printf ----\n");
  len2 = ft_printf("int: %d\n", n);
  printf("printed %d characters\n\n", len2);

  // unsigned
  printf("---- Testing printf ----\n");
  len1 = printf("unsigned: %u\n", u);
  printf("printed %d characters\n\n", len1);

  printf("---- Testing ft_printf ----\n");
  len2 = ft_printf("unsigned: %u\n", u);
  printf("printed %d characters\n\n", len2);

  // hex (lower)
  printf("---- Testing printf ----\n");
  len1 = printf("hex: %x\n", 255);
  printf("printed %d characters\n\n", len1);

  printf("---- Testing ft_printf ----\n");
  len2 = ft_printf("hex: %x\n", 255);
  printf("printed %d characters\n\n", len2);

  // HEX (upper)
  printf("---- Testing printf ----\n");
  len1 = printf("HEX: %X\n", 255);
  printf("printed %d characters\n\n", len1);

  printf("---- Testing ft_printf ----\n");
  len2 = ft_printf("HEX: %X\n", 255);
  printf("printed %d characters\n\n", len2);

  // pointer
  printf("---- Testing printf ----\n");
  len1 = printf("ptr: %p\n", ptr);
  printf("printed %d characters\n\n", len1);

  printf("---- Testing ft_printf ----\n");
  len2 = ft_printf("ptr: %p\n", ptr);
  printf("printed %d characters\n\n", len2);

  // percent
  printf("---- Testing printf ----\n");
  len1 = printf("percent: %%\n");
  printf("printed %d characters\n\n", len1);

  printf("---- Testing ft_printf ----\n");
  len2 = ft_printf("percent: %%\n");
  printf("printed %d characters\n\n", len2);

  return 0;
}

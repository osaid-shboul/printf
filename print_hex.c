#include "ft_printf.h"

int print_hex(unsigned int n, char f)
{

  int count = 0;

  char *b;

  if (f == 'X')
    b = "0123456789ABCDEF";
  else
    b = "0123456789abcdef";

  if (n >= 16)
    count += print_hex(n / 16, f);

  count += ft_write(&b[n % 16], 1);
  return (count);
}

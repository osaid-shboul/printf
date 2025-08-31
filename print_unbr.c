
#include "ft_printf.h"

int print_unbr(unsigned int n)
{
  int count = 0;

  char c;

  if (n > 9)
    count += print_unbr(n / 10);

  c = (n % 10) + '0';

  count += ft_write(&c, 1);

  return (count);
}
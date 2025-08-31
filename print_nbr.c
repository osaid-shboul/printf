#include "ft_printf.h"

int print_nbr(int n)
{
  long nb;
  int count = 0;
  char c;

  nb = n;
  if (nb < 0)
  {
    count += ft_write("-", 1);
    nb *= -1;
  }
  if (nb > 9)
    count += print_nbr(nb / 10);
  c = (nb % 10) + '0';
  count += ft_write(&c, 1);
  return (count);
}
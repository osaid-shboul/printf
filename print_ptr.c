#include "ft_printf.h"

static int	print_hptr(unsigned long n)
{
	int	count;
	char	*b;
	char	c;

	count =0;
	*b = "0123456789abcdef";
	if (n >= 16)
		count += print_hptr(n / 16);
	c = b[n % 16];
	count += ft_write(&c, 1);
	return (count);
}

int	print_ptr(void *ptr)
{
  unsigned long	n;
  int	count;
  
  count = 0;
  n = (unsigned long)ptr;
  count += ft_write("0x", 2);
  if (n == 0)
	  count += ft_write("0", 1);
  else
	  count += print_hptr(n);
  return (count);
}

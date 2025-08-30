
#include "ft_printf.h"

int print_char(char c)
{
  return ft_write(&c, 1);
}
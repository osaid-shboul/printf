#include "ft_printf.h"

int	print_str(const char *s)
{
	int	l;

	l = 0;
	if (!s)
		s = "(null)";
	while (s[l])
		l++;
	return ft_write(s, l);
}

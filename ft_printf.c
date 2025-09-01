
#include "ft_printf.h"
#include <stdarg.h>

static int	handle_f(char f, va_list args)
{
	int	count;

	count = 0;
	if (f == 'c')
		count += print_char(va_arg(args, int));
	else if (f == 's')
		count += print_str(va_arg(args, char *));
	else if (f == 'd' || f == 'i')
		count += print_nbr(va_arg(args, int));
	else if (f == 'u')
		count += print_unbr(va_arg(args, unsigned int));
	else if (f == 'x' || f == 'X')
		count += print_hex(va_arg(args, unsigned int), f);
	else if (f == 'p')
		count += print_ptr(va_arg(args, void *));
	else if (f == '%')
		count += ft_write("%", 1);
	return (count);
}
int	ft_printf(const char *f, ...)
{
	va_list	args;
	int	count;
	int	i;

	count =0;
	i = 0;
	va_start(args, f);
	while (f[i])
	{
		if (f[i] == '%')
		{
			i++;
			count += handle_f(f[i], args);
		}
		else
			count += ft_write(&f[i], 1);
		i++;
	}
	va_end(args);
	return (count);
}

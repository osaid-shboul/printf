#ifndef FT_PRINTF_H
#define FT_PRINTF_H
#include <unistd.h>
#include <stdarg.h>

int	ft_write(const char *s, size_t l);
int	print_char(char c);
int	print_str(const char *s);
int	print_nbr(int n);
int	print_unbr(unsigned int n);
int	print_hex(unsigned int n, char f);
int	print_ptr(void *ptr);
int	ft_printf(const char *f, ...);
#endif

#include <unistd.h>

int	ft_write(const char *s, size_t l)
{
	ssize_t	r;

	r = write(1,s,l);
	if (r < 0)
		return (-1);
	return ((int)r);
}

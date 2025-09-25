/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osaid <osaid@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 23:06:23 by oalshbou          #+#    #+#             */
/*   Updated: 2025/09/24 07:22:33 by osaid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int print_hptr(unsigned long n)
{
	int count;
	char *b;
	char c;

	b = "0123456789abcdef";
	count = 0;
	if (n >= 16)
		count += print_hptr(n / 16);
	c = b[n % 16];
	count += ft_write(&c, 1);
	return (count);
}

int print_ptr(void *ptr)
{
	int count;
	unsigned long n;

	count = 0;
	if (!ptr)
	{
		count += ft_write("(nil)", 5);
		return (count);
	}
	n = (unsigned long)ptr;
	if (n == 0)
		count += ft_write("(nil)", 5);
	else
	{
		count += ft_write("0x", 2);
		count += print_hptr(n);
	}
	return (count);
}

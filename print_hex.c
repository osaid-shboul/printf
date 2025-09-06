/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalshbou <oalshbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 23:04:08 by oalshbou          #+#    #+#             */
/*   Updated: 2025/09/01 23:05:34 by oalshbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	print_hex(unsigned int n, char f)
{
	int		count;
	char	*b;

	count = 0;
	if (f == 'X')
		b = "0123456789ABCDEF";
	else
		b = "0123456789abcdef";
	if (n >= 16)
		count += print_hex(n / 16, f);
	count += ft_write(&b[n % 16], 1);
	return (count);
}

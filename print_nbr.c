/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_nbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalshbou <oalshbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 23:33:25 by oalshbou          #+#    #+#             */
/*   Updated: 2025/09/01 23:33:34 by oalshbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_nbr(int n)
{
	long	nb;
	int		count;
	char	c;

	count = 0;
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

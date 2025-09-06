/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalshbou <oalshbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 23:33:49 by oalshbou          #+#    #+#             */
/*   Updated: 2025/09/01 23:33:51 by oalshbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_unbr(unsigned int n)
{
	int		count;
	char	c;

	count = 0;
	if (n > 9)
		count += print_unbr(n / 10);
	c = (n % 10) + '0';
	count += ft_write(&c, 1);
	return (count);
}

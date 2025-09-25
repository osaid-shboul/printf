/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalshbou <oalshbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 23:02:54 by oalshbou          #+#    #+#             */
/*   Updated: 2025/09/01 23:03:25 by oalshbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include "ft_printf.h"

int ft_write(const char *s, size_t l)
{
	ssize_t r;

	r = write(1, s, l);
	if (r < 0)
		return (-1);
	return ((int)r);
}

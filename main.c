/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osaid <osaid@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 02:41:04 by oalshbou          #+#    #+#             */
/*   Updated: 2025/09/07 02:41:50 by osaid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "ft_printf.h"
// #include <stdio.h>

// int	main(void)
// {
// 	char			c;
// 	char			*str;
// 	int				n;
// 	unsigned int	u;
// 	void			*ptr;

// 	int len1, len2;
// 	c = 'A';
// 	str = "Hello, 42!";
// 	n = -12345;
// 	u = 4294967295;
// 	ptr = str;
// 	// char
// 	printf("---- Testing printf ----\n");
// 	len1 = printf("char: %c\n", c);
// 	printf("printed %d characters\n\n", len1);
// 	printf("---- Testing ft_printf ----\n");
// 	len2 = ft_printf("char: %c\n", c);
// 	printf("printed %d characters\n\n", len2);
// 	// string
// 	printf("---- Testing printf ----\n");
// 	len1 = printf("str: %s\n", str);
// 	printf("printed %d characters\n\n", len1);
// 	printf("---- Testing ft_printf ----\n");
// 	len2 = ft_printf("str: %s\n", str);
// 	printf("printed %d characters\n\n", len2);
// 	// int
// 	printf("---- Testing printf ----\n");
// 	len1 = printf("int: %d\n", n);
// 	printf("printed %d characters\n\n", len1);
// 	printf("---- Testing ft_printf ----\n");
// 	len2 = ft_printf("int: %d\n", n);
// 	printf("printed %d characters\n\n", len2);
// 	// unsigned
// 	printf("---- Testing printf ----\n");
// 	len1 = printf("unsigned: %u\n", u);
// 	printf("printed %d characters\n\n", len1);
// 	printf("---- Testing ft_printf ----\n");
// 	len2 = ft_printf("unsigned: %u\n", u);
// 	printf("printed %d characters\n\n", len2);
// 	// hex (lower)
// 	printf("---- Testing printf ----\n");
// 	len1 = printf("hex: %x\n", 255);
// 	printf("printed %d characters\n\n", len1);
// 	printf("---- Testing ft_printf ----\n");
// 	len2 = ft_printf("hex: %x\n", 255);
// 	printf("printed %d characters\n\n", len2);
// 	// HEX (upper)
// 	printf("---- Testing printf ----\n");
// 	len1 = printf("HEX: %X\n", 255);
// 	printf("printed %d characters\n\n", len1);
// 	printf("---- Testing ft_printf ----\n");
// 	len2 = ft_printf("HEX: %X\n", 255);
// 	printf("printed %d characters\n\n", len2);
// 	// pointer
// 	printf("---- Testing printf ----\n");
// 	len1 = printf("ptr: %p\n", ptr);
// 	printf("printed %d characters\n\n", len1);
// 	printf("---- Testing ft_printf ----\n");
// 	len2 = ft_printf("ptr: %p\n", ptr);
// 	printf("printed %d characters\n\n", len2);
// 	// percent
// 	printf("---- Testing printf ----\n");
// 	len1 = printf("percent: %%\n");
// 	printf("printed %d characters\n\n", len1);
// 	printf("---- Testing ft_printf ----\n");
// 	len2 = ft_printf("percent: %%\n");
// 	printf("printed %d characters\n\n", len2);
// 	return (0);
// }

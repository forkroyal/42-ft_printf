/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 14:21:50 by fsitter           #+#    #+#             */
/*   Updated: 2025/10/21 14:53:32 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(unsigned long nb);

int	ft_putptr(unsigned long nb)
{
	int len;
	int is_valid;
	char *base;

	base = "0123456789abcdef";
	len = 0;
	len += ft_putstr("0x");
	if (nb > 15)
		len += ft_puthex((nb / 16), 'x');
	is_valid = ft_putchar(base[nb % 16]);
	if (is_valid == -1)
		return (is_valid);
	return (len + is_valid);
}

// int	main(void)
// {
// 	int	number;
// 	int *nptr = & number;

// 	number = 42000000;

// 	ft_putptr((unsigned long)nptr);
// 	printf("\n");
// 	printf("%p\n", nptr);

// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 19:22:45 by fsitter           #+#    #+#             */
/*   Updated: 2025/10/17 19:52:23 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned long n, const char format);

int	ft_puthex(unsigned long n, const char format)
{
	int		len;
	int		check;
	char	*base;

	base = "0123456789ABCDEF";
	if (format == 'x')
		base = "0123456789abcdef";
	len = 0;
	if (n > 15)
		len += ft_puthex((n / 16), format);
	check = ft_putchar(base[n % 16]);
	if (check == -1)
		return (check);
	return (len + check);
}

// int	main(void)
// {
// 	unsigned long	number;

// 	number = 42;

// 	ft_puthex(number, 'x');
// 	printf("\n");
// 	ft_puthex(number, 'X');
// }

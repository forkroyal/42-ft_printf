/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 18:08:50 by fsitter           #+#    #+#             */
/*   Updated: 2025/10/19 18:27:22 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nb);

int	ft_putnbr(int nb)
{
	int			len;
	int			is_valid;
	long long	n;

	len = 0;
	n = nb;
	if (n < 0)
	{
		len++;
		ft_putchar('-');
		n *= -1;
	}
	while (n > 9)
	{
		len += ft_putnbr(n / 10);
		n %= 10;
	}
	is_valid = ft_putchar(n + 48);
	if (is_valid == -1)
		return (is_valid);
	return (len + is_valid);
}

// int	main(void)
// {
// 	int	a;
// 	int	i;
// 	int	j;

// 	a = -42000000;
// 	i = ft_putnbr(a);
// 	printf("\n");
// 	printf("%i\n", i);
// 	j = printf("%i", a);
// 	printf("\n");
// 	printf("%i\n", j);
// }

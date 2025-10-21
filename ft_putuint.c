/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 14:21:55 by fsitter           #+#    #+#             */
/*   Updated: 2025/10/21 14:53:03 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putuint(unsigned int nb);

int	ft_putuint(unsigned int nb)
{
	int	len;
	int	is_valid;

	len = 0;
	if (nb > 9)
		len += ft_putuint(nb / 10);
	is_valid = ft_putchar(nb % 10 + 48);
	if (is_valid == -1)
		return (is_valid);
	return (len + is_valid);
}

// int	main(void)
// {
// 	unsigned int	a;
// 	int	i;
// 	int	j;

// 	a = 4200;
// 	i = ft_putuint(a);
// 	printf("\n");
// 	printf("%u\n", i);
// 	j = printf("%i", a);
// 	printf("\n");
// 	printf("%i\n", j);
// }
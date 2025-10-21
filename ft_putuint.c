/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 14:21:55 by fsitter           #+#    #+#             */
/*   Updated: 2025/10/21 14:27:17 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_putuint(unsigned int nb);

int	ft_putuint(unsigned int nb)
{
	int			len;
	unsigned long	n;

	len = 0;
	n = nb;

	while (n > 9)
	{
		len += ft_putuint(n / 10);
		n %= 10;
	}
	len += ft_putchar(n + 48);
	
	return (len);
}

int	main(void)
{
	int	a;
	int	i;
	int	j;

	a = 4200;
	i = ft_putuint(a);
	printf("\n");
	printf("%i\n", i);
	j = printf("%i", a);
	printf("\n");
	printf("%i\n", j);
}
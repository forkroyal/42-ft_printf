/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 19:26:45 by fsitter           #+#    #+#             */
/*   Updated: 2025/10/19 19:03:58 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s);

int	ft_putstr(char *s)
{
	int	i;

	if (s == NULL)
		return (ft_putstr("(null)"));
	i = 0;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
	return (i);
}

// int	main(void)
// {
// 	char	*s;
// 	int		j;
// 	int		k;

// 	s = NULL;
// 	j = ft_putstr(s);
// 	printf("\n");
// 	printf("%i\n", j);
// 	k = printf("%s", s);
// 	printf("\n");
// 	printf("%i\n", k);
// 	printf("\n");
// }

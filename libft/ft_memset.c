/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 15:54:39 by fsitter           #+#    #+#             */
/*   Updated: 2025/10/08 15:28:31 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n);

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	ctr;
	size_t			i;

	i = 0;
	str = (unsigned char *)s;
	ctr = (unsigned char)c;
	while (n > i)
	{
		str[i] = ctr;
		i++;
	}
	return (s);
}

// int	main(void)
// {
// 	char test[5] = {"hello"};
// 	printf("%s\n", test);
// 	ft_memset(test+1, 'X', sizeof(char) * 2);
// 	printf("%s\n", test);

// 	// char test1[5] = {"hello"};
// 	// printf("%s\n", test1);
// 	// memset(test1+1, 'X', sizeof(char) * 2);
// 	// printf("%s\n", test1);
// }
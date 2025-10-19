/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 16:19:37 by fsitter           #+#    #+#             */
/*   Updated: 2025/10/10 09:43:32 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n);

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	ctr;

	str = (unsigned char *)s;
	ctr = (unsigned char)c;
	while (n > 0)
	{
		if (*str == ctr)
		{
			return (str);
		}
		str++;
		n--;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char haystack[] = {'s', 'r', 's', 't', 'w', 'p', 'x'};
// 	char needle = 'p';

// 	char *position = ft_memchr(NULL, needle, 6);
// 	if (position == NULL)
// 		return (0);
// 	printf("%c\n", position[0]);
// 	printf("%c\n", position[1]);
// 	printf("%c\n", position[2]);

// 	// char *position = memchr(NULL, needle, 6);
// 	// if (position == NULL)
// 	// 	return (0);
// 	// printf("%c\n", position[0]);
// 	// printf("%c\n", position[1]);
// 	// printf("%c\n", position[2]);
// }
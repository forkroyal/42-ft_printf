/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 10:29:52 by fsitter           #+#    #+#             */
/*   Updated: 2025/10/10 09:04:54 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n);

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n > 0)
	{
		*str++ = '\0';
		n--;
	}
}
// int	main(void)
// {
// 	char test[5] = {"hello"};
// 	int which = 1;

// 	if (which == 0)
// 	{
// 		printf("%s\n", test);
// 		ft_bzero(NULL, sizeof(char) * 2);
// 		printf("%s\n", test);
// 	}
// 	else
// 	{
// 		printf("%s\n", test);
// 		bzero(NULL, sizeof(char) * 2);
// 		printf("%s\n", test);
// 	}
// }
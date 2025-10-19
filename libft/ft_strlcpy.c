/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 12:01:08 by fsitter           #+#    #+#             */
/*   Updated: 2025/10/11 14:15:18 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size);

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (src[i] != '\0' && (size - 1) > i)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

// int	main(void)
// {
// 	char dest[6] = {"hello"};
// 	char src[5] = {"byby"};
// 	printf("%s\n", dest);
// 	ft_strlcpy(dest, src, 0);
// 	// strlcpy(dest, src, 9);
// 	printf("%s\n", dest);
// 	printf("%li\n", ft_strlcpy(dest, src, 0));
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 16:53:29 by fsitter           #+#    #+#             */
/*   Updated: 2025/10/10 15:45:11 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len);

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!big && len == 0)
		return (0);
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] != '\0' && big[i + j] == little[j] && i + j < len)
		{
			if (little[j + 1] == '\0')
				return ((char *)&big[i]);
			j++;
		}
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	// const char *largestring = "Foo Bar Baz";
// 	// const char *smallstring = "Baz";

// 	// const char *largestring = NULL;
// 	// const char *smallstring = "Baz";

// 	// const char *largestring = "Foo Bar Baz";
// 	// const char *smallstring = NULL;

// 	const char *largestring = "MZIRIBMZIRIBMZE123";
// 	const char *smallstring = "MZIRIBMZE";

// 	// const char *largestring = NULL;
// 	// const char *smallstring = NULL;

// 	// size_t lbsd = ft_strlen(smallstring);
// 	printf("%li\n", ft_strlen(smallstring));
// 	// size_t lbsd = NULL;
// 	// size_t lbsd = 0;
// 	size_t lbsd = 9;

// 	char *ptr;
// 	char *ptr2;

// 	// ptr2 = strnstr(largestring, smallstring, lbsd);
// 	// printf("%s\n", ptr2);

// 	printf("safe\n");

// 	ptr = ft_strnstr(largestring, smallstring, lbsd);
// 	printf("%s\n", ptr);
// }
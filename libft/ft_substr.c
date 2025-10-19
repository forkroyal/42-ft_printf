/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 12:24:16 by fsitter           #+#    #+#             */
/*   Updated: 2025/10/10 16:19:55 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	len_of_s;

	if (!s)
		return (NULL);
	len_of_s = ft_strlen(s);
	if (start >= len_of_s)
		return (ft_strdup(""));
	if (len > len_of_s - start)
		len = len_of_s - start;
	sub = malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (NULL);
	i = 0;
	while (len > i && s[i])
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}

// int	main(void)
// {
// 	char s[] = "Hello";
// 	char *s2 = ft_substr(s, 6, 5);
// 	printf("%s\n", s);
// 	printf("%p\n", s);
// 	printf("%s\n", s2);
// 	printf("%p\n", s2);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 12:02:10 by fsitter           #+#    #+#             */
/*   Updated: 2025/10/06 12:20:46 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s);

char	*ft_strdup(const char *s)
{
	int		len;
	int		i;
	char	*duplicate;

	len = ft_strlen(s);
	duplicate = malloc(sizeof(char) * (len + 1));
	if (!duplicate)
		return (NULL);
	i = 0;
	while (s[i])
	{
		duplicate[i] = s[i];
		i++;
	}
	duplicate[i] = '\0';
	return (duplicate);
}

// int	main(void)
// {
// 	char s[] = "Hello";
// 	char *s2 = ft_strdup(s);
// 	printf("%s\n", s);
// 	printf("%p\n", s);
// 	printf("%s\n", s2);
// 	printf("%p\n", s2);
// }
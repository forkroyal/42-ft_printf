/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 12:41:26 by fsitter           #+#    #+#             */
/*   Updated: 2025/10/12 12:27:42 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	int		len;
	char	*mapped;

	i = 0;
	len = ft_strlen(s);
	mapped = malloc(sizeof(char) * len + 1);
	if (!mapped)
		return (NULL);
	while (i < len)
	{
		mapped[i] = f(i, s[i]);
		i++;
	}
	mapped[i] = '\0';
	return (mapped);
}

// char		fs_toupper(unsigned int a, char c);

// char		fs_toupper(unsigned int a, char c)
// {
// 	(void)a;
// 	if (c >= 'a' && c <= 'z')
// 		return (c - 32);
// 	else
// 		return (c);
// }

// int	main(void)
// {
// 	char hallo[] = "hallo";
// 	char *s;

// 	s = ft_strmapi(hallo, fs_toupper);
// 	printf("%s\n", s);
// }

// to make the fucntion safer add:
// if (!s) [23]
// 	return (NULL); [24]
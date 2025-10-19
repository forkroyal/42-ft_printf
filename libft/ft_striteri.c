/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 13:21:02 by fsitter           #+#    #+#             */
/*   Updated: 2025/10/10 11:16:43 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *));

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// void		fs_toupper(unsigned int a, char* c);

// void		fs_toupper(unsigned int a, char* c)
// {
// 	(void)a;
// 	if (*c >= 'a' && *c <= 'z')
// 		*c = *c - 32;
// 	else
// 		return ;
// }

// int	main(void)
// {
// 	char hallo[] = "hallo";
// 	char *s;

// 	ft_striteri(hallo, fs_toupper);
// 	printf("%s\n", hallo);
// }
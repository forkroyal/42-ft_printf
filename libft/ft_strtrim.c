/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 14:20:50 by fsitter           #+#    #+#             */
/*   Updated: 2025/10/11 10:14:28 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	size_t	len_trim;
	char	*trim;
	size_t	i;
	size_t	j;

	if (!s1)
		return (NULL);
	len = ft_strlen(s1);
	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	j = len - 1;
	while (j > i && ft_strchr(set, s1[j]))
		j--;
	len_trim = j - i;
	trim = malloc(sizeof(char) * (len_trim + 2));
	if (!trim)
		return (NULL);
	ft_memcpy(trim, s1 + i, len_trim + 1);
	trim[len_trim + 1] = '\0';
	return (trim);
}

// int	main(void)
// {
// 	char s[] = "heyhallohhey";
// 	char s2[] = "hey";

// 	char *s3;

// 	printf("Trimmed: %s\n", ft_strtrim(s, NULL));

// 	s3 = ft_strtrim(s, s2);
// 	printf("Trimmed: %s\n", s3);

// 	char *s4;

// 	s4 = ft_strtrim(s, NULL);
// 	printf("Trimmed: %s\n", s4);
// }
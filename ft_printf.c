/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 19:23:48 by fsitter           #+#    #+#             */
/*   Updated: 2025/10/24 10:35:31 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			ft_printf(const char *str, ...);
static int	whatingdoing(va_list args, const char format);

static int	whatingdoing(va_list args, const char format)
{
	void	*ptr;

	ptr = NULL;
	if (format == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (format == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (format == 'p')
	{
		ptr = va_arg(args, void *);
		if (!ptr)
			return (ft_putstr("(nil)"));
		return (ft_putptr((unsigned long)ptr));
	}
	else if (format == 'i' || format == 'd')
		return (ft_putnbr(va_arg(args, int)));
	else if (format == 'u')
		return (ft_putuint(va_arg(args, unsigned int)));
	else if (format == 'x' || format == 'X')
		return (ft_puthex(va_arg(args, unsigned int), format));
	else if (format == '%')
		return (ft_putchar(format));
	else
		return (-1);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		len;
	int		i;

	i = 0;
	len = 0;
	if (!str)
		return (-1);
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1] && ft_strchr("dcspiuxX%", str[i + 1]))
		{
			len += whatingdoing(args, str[i + 1]);
			i++;
		}
		else if (str[i] == '%' && !(ft_strchr("dcspiuxX%", str[i + 1])))
			return (-1);
		else
			len += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (len);
}

// int	main(void)
// {
// 	char a = 'a';
// 	int i = printf("%c\n", a);
// 	printf("%i\n", i);
// 	int j = ft_printf("%c\n", a);
// 	printf("%i\n", j);

// 	char *b = "nick nick nich";
// 	i = printf("%s\n", b);
// 	printf("%i\n", i);
// 	j = ft_printf("%s\n", b);
// 	printf("%i\n", j);

// 	i = printf("%p\n", b);
// 	printf("%i\n", i);
// 	j = ft_printf("%p\n", b);
// 	printf("%i\n", j);
// }
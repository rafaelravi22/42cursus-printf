/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafamart <rafamart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 18:22:29 by rafamart          #+#    #+#             */
/*   Updated: 2023/05/16 19:28:10 by rafamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *intake, ...)
{
	int		i;
	int		t;
	va_list	args;

	t = 0;
	i = 0;
	va_start(args, intake);
	while (intake[i] != '\0')
	{
		if (intake[i] == '%')
		{
			t += ft_conversion(intake[i + 1], args);
			i++;
		}
		else
			t += ft_putchar(intake[i]);
		i++;
	}
	va_end(args);
	return (t);
}

int	ft_conversion(char c, va_list a)
{
	int	t;

	t = 0;
	if (c == 'c')
		t = (ft_putchar(va_arg(a, int)));
	else if (c == 's')
		t = (ft_putstr(va_arg(a, char *)));
	else if (c == 'd' || c == 'i')
		t = (ft_putnbr(va_arg(a, int)));
	else if (c == 'X' || c == 'x')
		t = (ft_hex(va_arg(a, unsigned long int), c));
	else if (c == 'p')
		t = (ft_putp(va_arg(a, unsigned long int), c));
	else if (c == 'u')
		t = (ft_unsgdint(va_arg(a, unsigned int)));
	else if (c == '%')
		t = (ft_putchar('%'));
	return (t);
}

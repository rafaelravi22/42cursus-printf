/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafamart <rafamart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 19:13:30 by rafamart          #+#    #+#             */
/*   Updated: 2023/05/16 17:54:22 by rafamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex(unsigned long int n, int c)
{
	char	*hextype;
	int		t;

	t = 0;
	if (c == 'x' || c == 'p')
		hextype = "0123456789abcdef";
	if (c == 'X')
		hextype = "0123456789ABCDEF";
	if (n >= 16)
	{
		t += ft_hex(n / 16, c);
		t += ft_hex(n % 16, c);
	}
	else
		t += ft_putchar(hextype[n]);
	return (t);
}

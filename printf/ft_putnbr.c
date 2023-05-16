/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafamart <rafamart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 18:24:05 by rafamart          #+#    #+#             */
/*   Updated: 2023/05/16 17:45:59 by rafamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	long int	nb;
	int			t;

	nb = n;
	t = 0;
	if (nb < 0)
	{
		t += ft_putchar('-');
		nb *= -1;
	}
	if (nb > 9)
	{
		t += ft_putnbr(nb / 10) + ft_putnbr(nb % 10);
	}
	else
	{
		nb += 48;
		t += ft_putchar(nb);
	}
	return (t);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafamart <rafamart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 19:11:40 by rafamart          #+#    #+#             */
/*   Updated: 2023/05/16 19:18:51 by rafamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putp(unsigned long int n, int c)
{
	int	t;

	t = 0;
	if (!n)
		t += ft_putstr("(nil)");
	else
	{
		t += ft_putstr("0x");
		t += ft_hex(n, c);
	}
	return (t);
}

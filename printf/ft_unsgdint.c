/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsgdint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafamart <rafamart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 18:51:10 by rafamart          #+#    #+#             */
/*   Updated: 2023/05/16 17:45:47 by rafamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsgdint(long n)
{
	int	t;

	t = 0;
	if (n >= 10)
	{
		t += ft_unsgdint(n / 10) + ft_unsgdint(n % 10);
	}
	else
	{
		t += ft_putchar(n + 48);
	}
	return (t);
}

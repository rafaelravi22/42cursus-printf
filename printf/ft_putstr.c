/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafamart <rafamart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 18:24:24 by rafamart          #+#    #+#             */
/*   Updated: 2023/05/16 18:14:44 by rafamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	i;
	int	t;

	i = 0;
	t = 0;
	if (!s)
		return (ft_putstr("(null)"));
	while (s)
	{
		t += (putchar(s[i]));
		i++;
	}
	return (t);
}

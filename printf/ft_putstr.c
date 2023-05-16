/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafamart <rafamart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 18:24:24 by rafamart          #+#    #+#             */
/*   Updated: 2023/05/16 19:02:48 by rafamart         ###   ########.fr       */
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
	else
	{
		while (s[i])
		{
			t += write(1, &s[i], 1);
			i++;
		}
	}	
	return (t);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafamart <rafamart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 18:23:43 by rafamart          #+#    #+#             */
/*   Updated: 2023/05/16 19:32:42 by rafamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <limits.h>
# include <unistd.h>

int	ft_printf(const char *intake, ...);
int	ft_putchar(char c);
int	ft_hex(unsigned int long i, int c);
int	ft_putnbr(int n);
int	ft_putstr(char *s);
int	ft_unsgdint(long n);
int	ft_conversion(const char c, va_list a);
int	ft_putp(unsigned long int n, int c);

#endif

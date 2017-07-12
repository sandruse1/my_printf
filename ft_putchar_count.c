/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_count.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sandruse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 16:16:49 by sandruse          #+#    #+#             */
/*   Updated: 2017/03/18 18:26:26 by sandruse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_putchar_c(char s)
{
	write(1, &s, 1);
	g_len++;
}

void		ft_putstr_count(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		write(1, &s[i++], 1);
		g_len++;
	}
}

void		ft_putnbr_count(int n)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		g_len = g_len + 11;
	}
	else
	{
		if (n < 0)
		{
			ft_putchar_c('-');
			n = -n;
		}
		if (n >= 10)
		{
			ft_putnbr_count(n / 10);
			ft_putnbr_count(n % 10);
		}
		else
			ft_putchar_c(n + '0');
	}
}

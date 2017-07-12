/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uo_print.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sandruse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/19 13:06:06 by sandruse          #+#    #+#             */
/*   Updated: 2017/03/29 16:32:56 by sandruse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_uo_m(t_vse *vse)
{
	if ((vse->nol || (vse->sharp)) && (vse->type == 'o' || vse->type == 'O'))
	{
		vse->shunum--;
		ft_putchar_c('0');
	}
	while (--vse->tocnum + 1 > 0)
		ft_putchar_c('0');
	ft_putstr_count(vse->towr);
	while (--vse->shunum + 1 > 0)
		ft_putchar_c(' ');
}

void		ft_uo(t_vse *vse)
{
	if ((vse->sharp && ft_atoi(vse->towr) != 0) && (vse->type == 'o'
				|| vse->type == 'O'))
		vse->shunum--;
	while (--vse->shunum + 1 > 0)
		if (vse->nol && vse->toch == -1)
			ft_putchar_c('0');
		else
			ft_putchar_c(' ');
	while (--vse->tocnum + 1 > 0)
		ft_putchar_c('0');
	if (vse->sharp && (vse->type == 'o' || vse->type == 'O') &&
			(ft_atoi(vse->towr) != 0 || vse->toch == 0))
		ft_putchar_c('0');
	if (ft_atoi(vse->towr) != 0 || (ft_atoi(vse->towr) == 0 &&
				vse->toch == -1))
		ft_putstr_count(vse->towr);
	if (vse->toch == 0 && vse->shur > 0 && vse->towr[0] == '0' &&
			vse->towr[1] == '\0')
		ft_putchar_c(' ');
}

void		ft_x_m(t_vse *vse)
{
	if (vse->sharp && ft_atoi_base(vse->towr, 16) != 0)
	{
		vse->shunum -= 2;
		if (vse->type == 'X')
			ft_putstr_count("0X");
		else
			ft_putstr_count("0x");
	}
	if (vse->type == 'x')
		vse->towr = ft_tolowstr(vse->towr);
	while (--vse->tocnum + 1 > 0)
		ft_putchar_c('0');
	ft_putstr_count(vse->towr);
	while (--vse->shunum + 1 > 0)
		ft_putchar_c(' ');
}

void		ft_x(t_vse *vse)
{
	if (vse->sharp && ft_atoi_base(vse->towr, 16) != 0)
		vse->shunum -= 2;
	if (vse->sharp && vse->nol && ft_atoi_base(vse->towr, 16) != 0)
		(vse->type == 'X') ? ft_putstr_count("0X") : ft_putstr_count("0x");
	while (--vse->shunum + 1 > 0)
		if (vse->nol == 1 && vse->toch == -1)
			ft_putchar_c('0');
		else
			ft_putchar_c(' ');
	while (--vse->tocnum + 1 > 0)
		ft_putchar_c('0');
	if (vse->sharp && vse->nol == 0 && ft_atoi_base(vse->towr, 16) != 0)
		(vse->type == 'X') ? ft_putstr_count("0X") : ft_putstr_count("0x");
	if (vse->type == 'x')
		vse->towr = ft_tolowstr(vse->towr);
	if (vse->toch != 0)
		ft_putstr_count(vse->towr);
	if (vse->toch == 0 && vse->shur > 0 && vse->towr[0] == '0' &&
			vse->towr[1] == '\0')
		ft_putchar_c(' ');
}

void		ft_uo_print(t_vse *vse)
{
	if (vse->type == 'o' || vse->type == 'O' || vse->type == 'u' ||
			vse->type == 'U')
	{
		if (vse->toch >= 0 && ft_atoi(vse->towr) >= 0 &&
				vse->toch >= ft_strlen(vse->towr))
			vse->tocnum = vse->toch - ft_strlen(vse->towr);
		if (vse->shur && vse->shur > vse->toch &&
				vse->shur > ft_strlen(vse->towr))
			vse->shunum = vse->shur - ft_strlen(vse->towr) - vse->tocnum;
		(vse->minus) ? ft_uo_m(vse) : ft_uo(vse);
	}
	else if (vse->type == 'x' || vse->type == 'X')
	{
		if (vse->toch >= 0 && ft_atoi_base(vse->towr, 16) >= 0 &&
				vse->toch >= ft_strlen(vse->towr))
			vse->tocnum = vse->toch - ft_strlen(vse->towr);
		if (vse->shur && vse->shur > vse->toch &&
				vse->shur > ft_strlen(vse->towr))
			vse->shunum = vse->shur - ft_strlen(vse->towr) - vse->tocnum;
		(vse->minus) ? ft_x_m(vse) : ft_x(vse);
	}
}

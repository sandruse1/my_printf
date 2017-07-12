/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cs_print.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sandruse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/19 15:25:21 by sandruse          #+#    #+#             */
/*   Updated: 2017/03/29 16:54:12 by sandruse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_s_m(t_vse *vse)
{
	int		i;

	i = 0;
	if (vse->toch > -1 && ft_strlen(vse->towr) > vse->toch)
		vse->tocnum = vse->toch;
	else
		vse->tocnum = ft_strlen(vse->towr);
	if (vse->shur)
		vse->shunum = vse->shur - vse->tocnum;
	if (vse->toch > -1 && ft_strlen(vse->towr) > 0)
		while (i < vse->toch && vse->towr[i])
			ft_putchar_c(vse->towr[i++]);
	else if (ft_strlen(vse->towr) > 0)
		ft_putstr_count(vse->towr);
	while (--vse->shunum + 1 > 0 && vse->shur >= ft_strlen(vse->towr))
		(vse->nol) ? ft_putchar_c('0') : ft_putchar_c(' ');
}

void		ft_s(t_vse *vse)
{
	int		i;

	i = 0;
	if (vse->toch > -1 && ft_strlen(vse->towr) > vse->toch)
		vse->tocnum = vse->toch;
	else
		vse->tocnum = ft_strlen(vse->towr);
	if (vse->shur != 0)
		vse->shunum = vse->shur - vse->tocnum;
	if (ft_strlen(vse->towr) == 0 && vse->shur == 0)
		vse->shunum = 0;
	while (--vse->shunum + 1 > 0 &&
			(vse->shur >= (ft_strlen(vse->towr) - vse->toch) ||
				ft_strcmp(vse->towr, "(null)") == 0))
		(vse->nol) ? ft_putchar_c('0') : ft_putchar_c(' ');
	if (vse->toch > -1 && ft_strlen(vse->towr) > 0)
		while (i < vse->toch && vse->towr[i])
			ft_putchar_c(vse->towr[i++]);
	else if (ft_strlen(vse->towr) > 0)
		ft_putstr_count(vse->towr);
}

void		ft_s_print(t_vse *vse)
{
	if (vse->shur && vse->shur > vse->toch)
		vse->shunum = vse->shur - ft_strlen(vse->towr);
	if (vse->minus)
		ft_s_m(vse);
	else
		ft_s(vse);
}

void		ft_cs_print(t_vse *vse)
{
	if (vse->type == 's' || vse->type == 'S')
		ft_s_print(vse);
	else
	{
		if (vse->shur && vse->shur > vse->toch)
			vse->shunum = vse->shur - ft_strlen(vse->towr);
		if (vse->minus)
		{
			ft_putchar_c(vse->towr[0]);
			if (vse->towr[0] == 0)
				vse->shunum--;
			while (--vse->shunum + 1 > 0)
				ft_putchar_c(' ');
		}
		else
		{
			if (vse->towr[0] == 0)
				vse->shunum--;
			while (--vse->shunum + 1 > 0)
				(vse->nol) ? ft_putchar_c('0') : ft_putchar_c(' ');
			ft_putchar_c(vse->towr[0]);
		}
	}
}

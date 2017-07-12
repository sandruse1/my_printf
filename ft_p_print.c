/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p_print.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sandruse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/19 15:31:02 by sandruse          #+#    #+#             */
/*   Updated: 2017/03/29 17:42:56 by sandruse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_p_m(t_vse *vse)
{
	if (vse->shur > 0 && vse->toch == -1 && vse->towr[0] == '0')
		vse->shunum--;
	vse->shunum -= 2;
	ft_putstr_count("0x");
	if (vse->towr[0] == '0' && vse->toch > 0)
		vse->tocnum++;
	while (--vse->tocnum + 1 > 0 && vse->toch > -1)
		ft_putchar_c('0');
	if (vse->towr[0] != '0' || (vse->shur > 0 && vse->toch == -1))
		ft_putstr_count(vse->towr);
	if (vse->towr[0] == '0')
		vse->shunum++;
	while (--vse->shunum + 1 > 0)
		ft_putchar_c(' ');
}

void		ft_p(t_vse *vse)
{
	vse->shunum -= 2;
	if (vse->nol)
		ft_putstr_count("0x");
	while (--vse->shunum + 1 > 0)
		if (vse->nol && vse->toch == -1)
			ft_putchar_c('0');
		else
			ft_putchar_c(' ');
	if (!(vse->nol))
		ft_putstr_count("0x");
	while (--vse->tocnum + 1 > 0)
		ft_putchar_c('0');
	if (vse->towr[0] != '0' ||
			(vse->shur > 0 && vse->toch == -1) ||
			(vse->shur == 0 && vse->toch >= -1 && vse->towr[0] == '0' &&
			vse->toch != 0))
		ft_putstr_count(vse->towr);
}

void		ft_p_print(t_vse *vse)
{
	if (vse->toch > -1 && vse->toch >= ft_strlen(vse->towr))
		vse->tocnum = vse->toch - ft_strlen(vse->towr);
	if (vse->shur && vse->shur > vse->toch)
		vse->shunum = vse->shur - ft_strlen(vse->towr) - vse->tocnum;
	if (vse->minus)
		ft_p_m(vse);
	else
		ft_p(vse);
}

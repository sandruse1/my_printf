/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printanemobaby.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sandruse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/16 12:34:41 by sandruse          #+#    #+#             */
/*   Updated: 2017/03/29 17:03:29 by sandruse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			help_if(t_vse *vse)
{
	if (vse->spec == NULL || (vse->spec && vse->spec[0] != 'l' &&
				vse->spec[0] != 'j' && vse->spec[0] != 'z'))
		return (1);
	return (0);
}

void		ft_minus(t_vse *vse)
{
	if (vse->prob && (ft_atoi(vse->towr) >= 0 || vse->type == 'D'))
	{
		if (vse->type != 'D' || ft_atoi(vse->towr) >= 0)
			vse->shunum--;
		ft_putchar_c(' ');
	}
	if (vse->plus && ft_atoi(vse->towr) > 0)
		ft_putchar_c('+');
	if (ft_atoi(vse->towr) < 0 && vse->type != 'D')
		ft_putchar_c('-');
	while (--vse->tocnum + 1 > 0)
		ft_putchar_c('0');
	if (ft_atoi(vse->towr) < 0 && vse->type != 'D')
		ft_putstr_count(vse->towr + 1);
	else
		ft_putstr_count(vse->towr);
	while (--vse->shunum + 1 > 0)
		ft_putchar_c(' ');
}

void		ft_standart(t_vse *vse)
{
	if (vse->prob && (ft_atoi(vse->towr) >= 0 || vse->type == 'D'))
	{
		vse->shunum--;
		ft_putchar_c(' ');
	}
	if ((vse->plus || (ft_atoi(vse->towr) < 0 && vse->type != 'D'))
			&& vse->nol && vse->toch == -1)
		if (help_if(vse))
			(ft_atoi(vse->towr) > -1) ? ft_putchar_c('+') : ft_putchar_c('-');
	while (--vse->shunum + 1 > 0 && vse->shur >= ft_strlen(vse->towr))
		(vse->nol && vse->toch == -1) ? ft_putchar_c('0') : ft_putchar_c(' ');
	if (((vse->plus || (ft_atoi(vse->towr) < 0 && vse->type != 'D'))
				&& !(vse->nol && vse->toch == -1)))
		if (help_if(vse))
			(ft_atoi(vse->towr) > -1) ? ft_putchar_c('+') : ft_putchar_c('-');
	while (--vse->tocnum + 1 > 0 && vse->toch >= ft_strlen(vse->towr))
		ft_putchar_c('0');
	if (ft_atoi(vse->towr) < 0 && vse->type != 'D' && (vse->toch != 0 ||
				vse->towr[0] != '0') && help_if(vse))
		ft_putstr_count(vse->towr + 1);
	else if (vse->toch != 0 || vse->towr[0] != '0')
		ft_putstr_count(vse->towr);
	if (vse->toch == 0 && vse->shur > 0 && vse->towr[0] == '0' &&
			vse->towr[1] == '\0')
		ft_putchar_c(' ');
}

void		ft_did(t_vse *vse)
{
	if (vse->toch >= ft_strlen(vse->towr))
		vse->tocnum = vse->toch - ft_strlen(vse->towr);
	else if (vse->toch < ft_strlen(vse->towr))
		vse->tocnum = 0;
	if (vse->toch > -1 && ft_atoi(vse->towr) < 0 && vse->type != 'D')
		vse->tocnum++;
	if (vse->shur && vse->shur > vse->toch)
		vse->shunum = vse->shur - ft_strlen(vse->towr) - vse->tocnum;
	if (vse->plus && ft_atoi(vse->towr) >= 0)
		vse->shunum--;
	if (vse->toch < ft_strlen(vse->towr) && vse->toch != -1 && vse->shur &&
			vse->towr[0] != '0' && ft_atoi(vse->towr) < 0)
		vse->shunum++;
	if (vse->minus)
		ft_minus(vse);
	else
		ft_standart(vse);
}

void		ft_did_print(t_vse *vse)
{
	if (ft_strchr("dDi", vse->type))
		ft_did(vse);
	else if (ft_strchr("uUoOxX", vse->type))
		ft_uo_print(vse);
	else if (ft_strchr("p", vse->type))
		ft_p_print(vse);
	else if (ft_strchr("sScC", vse->type))
		ft_cs_print(vse);
}

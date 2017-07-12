/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_undef.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sandruse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/29 17:03:09 by sandruse          #+#    #+#             */
/*   Updated: 2017/03/29 17:03:19 by sandruse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_undef_help(t_vse *vse, char *str)
{
	int		i;

	i = 0;
	while (ft_strchr("-+.# 0123456789hl%jzbsSpdDioOuUxXcC", str[i]))
	{
		if (str[i] == '%' && i != 0)
			break ;
		i++;
	}
	vse->type = str[i];
}

void		ft_un_m(t_vse *vse)
{
	while (--vse->tocnum + 1 > 0 && vse->toch > -1)
		ft_putchar_c('0');
	ft_putstr_count(vse->towr);
	while (--vse->shunum + 1 > 0)
		ft_putchar_c(' ');
}

void		ft_un(t_vse *vse)
{
	while (--vse->shunum + 1 > 0)
		if (vse->nol && vse->toch == -1)
			ft_putchar_c('0');
		else
			ft_putchar_c(' ');
	while (--vse->tocnum + 1 > 0)
		ft_putchar_c('0');
	ft_putstr_count(vse->towr);
}

void		ft_undef(t_vse *vse)
{
	int		i;

	i = 0;
	while (ft_strchr("-+.# 0123456789hljzbsSpdDioOuUxXcC", vse->line[i]))
		i++;
	vse->towr = ft_strsub(vse->line, i, ft_strlen(vse->line) - i);
	if (vse->toch > -1)
		vse->tocnum = vse->toch;
	if (vse->shur && vse->shur > vse->toch)
		vse->shunum = vse->shur - vse->tocnum - ft_strlen(vse->towr);
	if (vse->minus)
		ft_un_m(vse);
	else
		ft_un(vse);
}

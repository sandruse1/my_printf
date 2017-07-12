/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_specuficator.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sandruse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 16:33:19 by sandruse          #+#    #+#             */
/*   Updated: 2017/03/29 17:48:05 by sandruse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_check_specuficator(char **str, t_vse *vse)
{
	char	*s;
	int		i;
	char	*copy;

	i = 0;
	copy = *str;
	s = ft_strsub("sSpdDioOuUxXcC", 0, 14);
	while (ft_strchr(s, copy[i]) == 0 && copy[i])
	{
		i++;
		if (copy[i] == '%' && i != 0)
			break ;
	}
	if (copy[i] != '%' && ft_strchr(s, copy[i]))
		vse->type = copy[i];
	vse->line = (vse->type != 0) ? ft_strsub(copy, 1, (i - 1)) :
		ft_strsub(copy, 1, i);
	while (ft_strchr(s, *copy) == 0 && *copy != '\0')
	{
		copy++;
		if (*copy == '%' && i != 0)
			break ;
	}
	*str = copy;
	free(s);
}

void		ft_vid_shur(t_vse *vse)
{
	int		i;

	i = 0;
	while (vse->line[i])
		i++;
	while (vse->line[i] != '.' && i >= 0)
		i--;
	if (vse->line[i] == '.' && ft_isdigit(vse->line[i + 1]) == 0)
		vse->toch = 0;
	else if (vse->line[i] == '.')
		vse->toch = ft_atoi(vse->line + 1 + i);
	i = 0;
	while ((ft_isdigit(vse->line[i]) == 0 || vse->line[i] == '0')
			&& vse->line[i])
		i++;
	if (vse->line[i] && vse->line[i - 1] != '.')
		vse->shur = ft_atoi(vse->line + i);
}

void		ft_reset(t_vse *vse)
{
	vse->perstep = 0;
	vse->nol = 0;
	vse->minus = 0;
	vse->plus = 0;
	vse->prob = 0;
	vse->sharp = 0;
	vse->shur = 0;
	vse->tocnum = 0;
	vse->shunum = 0;
	vse->spec = NULL;
	vse->towr = NULL;
	vse->toch = -1;
}

void		ft_check_flags(t_vse *vse)
{
	ft_reset(vse);
	if (ft_strchr(vse->line, '-'))
		vse->minus = 1;
	else if (ft_strchr(vse->line, '0') &&
			ft_isdigit(*(ft_strchr(vse->line, '0') - 1)) != 1
			&& *(ft_strchr(vse->line, '0') - 1) != '.')
		vse->nol = 1;
	if (ft_strchr(vse->line, '+'))
		vse->plus = 1;
	else if (ft_strchr(vse->line, ' '))
		vse->prob = 1;
	if (ft_strchr(vse->line, '#'))
		vse->sharp = 1;
	if (ft_strchr(vse->line, 'z'))
		vse->spec = ft_strsub("z", 0, 1);
	else if (ft_strchr(vse->line, 'j'))
		vse->spec = ft_strsub("j", 0, 1);
	else if (ft_strchr(vse->line, 'l') &&
			*(ft_strchr(vse->line, 'l') + 1) == 'l')
		vse->spec = ft_strsub("ll", 0, 2);
	else if (ft_strchr(vse->line, 'l'))
		vse->spec = ft_strsub("l", 0, 1);
	else if (ft_strchr(vse->line, 'h'))
		ft_help_hh(vse);
}

void		ft_after_percent(char **str, va_list argv, t_vse *vse)
{
	vse->type = 0;
	ft_check_specuficator(str, vse);
	ft_check_flags(vse);
	ft_vid_shur(vse);
	if (vse->type == 0)
		ft_undef(vse);
	else
	{
		ft_who_is_who(vse, argv);
		ft_did_print(vse);
	}
	free(vse->spec);
	free(vse->line);
}

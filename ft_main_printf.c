/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main_printf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sandruse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 11:50:00 by sandruse          #+#    #+#             */
/*   Updated: 2017/03/29 16:53:31 by sandruse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int				ft_printf(char *baza, ...)
{
	va_list		argv;
	char		*copy;
	t_vse		vse;

	g_len = 0;
	va_start(argv, baza);
	copy = baza;
	while (*copy != '\0')
	{
		while ((*copy != '%' && *copy != '\0') ||
				(*copy == '%' && *(copy + 1) == '%'))
		{
			ft_putchar_c(*copy);
			(*copy == '%' && *(copy + 1) == '%') ? copy += 2 : copy++;
			if (*copy == '%' && *(copy + 1) != '%')
				break ;
		}
		if (*copy == '\0' || (*copy == '%' && *(copy + 1) == '\0'))
			break ;
		ft_after_percent(&copy, argv, &vse);
		copy++;
	}
	va_end(argv);
	return (g_len);
}

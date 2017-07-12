/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sandruse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 13:39:59 by sandruse          #+#    #+#             */
/*   Updated: 2017/03/24 14:20:47 by sandruse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strnew(size_t size)
{
	char	*d;
	size_t	i;

	i = 0;
	d = (char*)malloc(sizeof(char) * size + 1);
	if (d == NULL)
		return (0);
	while (i < size + 1)
		d[i++] = '\0';
	return (d);
}

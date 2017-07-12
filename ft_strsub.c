/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sandruse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 11:00:23 by sandruse          #+#    #+#             */
/*   Updated: 2017/03/24 14:02:27 by sandruse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*d;

	i = 0;
	if (!s)
		return (0);
	d = (char*)malloc(sizeof(char) * (len + 1));
	if (d == NULL)
		return (0);
	while (i < len && s[start])
		d[i++] = s[start++];
	d[i] = '\0';
	return (d);
}

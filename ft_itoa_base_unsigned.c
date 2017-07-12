/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base_unsigned.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sandruse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/17 18:03:14 by sandruse          #+#    #+#             */
/*   Updated: 2017/03/26 12:43:30 by sandruse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int					ft_len22(unsigned long long tmp, int base)
{
	int						i;

	i = 0;
	while (tmp > 0)
	{
		tmp /= (unsigned long long)base;
		i++;
	}
	return (i);
}

static char					ft_record22(unsigned long long tmp)
{
	if (tmp >= 10)
		return (tmp - 10 + 'A');
	else
		return (tmp + '0');
}

char						*ft_itoa_b_u(unsigned long long value,
		int base)
{
	int						i;
	unsigned long long		tmp;
	char					*str;

	if (base < 2 || base > 16)
		return (NULL);
	tmp = value;
	i = ft_len22(tmp, base);
	if (value == 0)
		i++;
	str = (char*)malloc(sizeof(char) * i + 1);
	str[i--] = '\0';
	while (i >= 0)
	{
		str[i] = ft_record22(tmp % (unsigned long long)base);
		i--;
		tmp /= (unsigned long long)base;
	}
	return (str);
}

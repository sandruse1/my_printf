/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft_strdup_bit.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sandruse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/15 18:41:20 by sandruse          #+#    #+#             */
/*   Updated: 2017/03/29 17:47:26 by sandruse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void				ft_help_hh(t_vse *vse)
{
	int		c;
	int		i;

	i = -1;
	c = 0;
	while (vse->line[++i] != '\0')
		if (vse->line[i] == 'h')
			c++;
	if (c % 2 == 0)
		vse->spec = ft_strsub("hh", 0, 2);
	else
		vse->spec = ft_strsub("h", 0, 1);
}

static unsigned int	ft_bitlen(wint_t *str)
{
	unsigned int	l;
	int				i;

	l = 0;
	i = -1;
	while (str[++i])
		if (str[i] <= 0x7F)
			l++;
		else if (str[i] <= 0x7FF)
			l += 2;
		else if (str[i] <= 0xFFFF)
			l += 3;
		else if (str[i] <= 0x10FFFF)
			l += 4;
	return (l);
}

static char			*ft_bit_help(char *dest, wint_t *str, int *i, int *j)
{
	if (str[*i] <= 0xFFFF)
	{
		dest[(*j)++] = (char)(((str[*i] & 0xF000) >> 12) + 0xE0);
		dest[(*j)++] = (char)(((str[*i] & 0x0Fc0) >> 6) + 0x80);
		dest[(*j)++] = (char)((str[*i] & 0x003F) + 0x80);
	}
	else if (str[*i] <= 0x10FFFF)
	{
		dest[(*j)++] = (char)(((str[*i] & 0x1c0000) >> 18) + 0xF0);
		dest[(*j)++] = (char)(((str[*i] & 0x03F000) >> 12) + 0x80);
		dest[(*j)++] = (char)(((str[*i] & 0x0Fc0) >> 6) + 0x80);
		dest[(*j)++] = (char)((str[*i] & 0x003F) + 0x80);
	}
	return (dest);
}

static char			*ft_bit(char *dest, wint_t *str)
{
	int				i;
	int				j;

	i = -1;
	j = 0;
	while (str[++i])
		if (str[i] <= 0x7F)
			dest[j++] = str[i];
		else if (str[i] <= 0x7FF)
		{
			dest[j++] = (char)(((str[i] & 0x07c0) >> 6) + 0xc0);
			dest[j++] = (char)((str[i] & 0x003F) + 0x80);
		}
		else
			dest = ft_bit_help(dest, str, &i, &j);
	dest[j] = '\0';
	return (dest);
}

char				*ft_strdup_bit(wint_t *str)
{
	unsigned int	i;
	char			*dest;

	i = 0;
	if (!str)
	{
		dest = (char*)malloc(sizeof(char) * 7);
		dest = "(null)";
		return (dest);
	}
	dest = (char*)malloc(sizeof(char) * ft_bitlen(str) + 1);
	if (!dest)
		return (NULL);
	dest = ft_bit(dest, str);
	return (dest);
}

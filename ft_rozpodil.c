/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rozpodil.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sandruse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 19:37:22 by sandruse          #+#    #+#             */
/*   Updated: 2017/03/31 16:24:26 by sandruse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*ft_strdup_v2(const char *str)
{
	size_t	i;
	char	*dest;

	i = -1;
	if (!str)
	{
		dest = ft_strsub("(null)", 0, 6);
		return (dest);
	}
	dest = (char*)malloc(sizeof(char) * ((ft_strlen(str)) + 1));
	if (!dest)
		return (NULL);
	while (str[++i])
		dest[i] = str[i];
	dest[i] = '\0';
	return (dest);
}

void		ft_str_char_type(va_list argv, t_vse *vse)
{
	if (vse->spec == NULL)
	{
		if (vse->type == 's')
			vse->towr = ft_strdup_v2(va_arg(argv, char*));
	}
	if (vse->type == 's' && vse->spec != NULL)
		vse->type = 'S';
	if (vse->type == 'S')
		vse->towr = ft_strdup_bit(va_arg(argv, wint_t*));
	else if (vse->type == 'c')
		vse->towr = ft_memset(ft_strnew(1), (char)va_arg(argv, int), 1);
	else if (vse->type == 'C')
		vse->towr = ft_memset(ft_strnew(1),
				(unsigned char)va_arg(argv, int), 1);
}

void		ft_digit_mod(va_list argv, t_vse *vse, int base)
{
	if (ft_strchr("ouxX", vse->type) && vse->spec == NULL)
		vse->towr = ft_itoa_b_u((unsigned long long)
				va_arg(argv, unsigned int), base);
	else if (ft_strchr("UO", vse->type) || ft_strcmp(vse->spec, "l") == 0)
		vse->towr = ft_itoa_b_u((unsigned long long)
				va_arg(argv, unsigned long int), base);
	else if (ft_strcmp(vse->spec, "hh") == 0)
		vse->towr = ft_itoa_b_u((unsigned long long)
				(unsigned char)va_arg(argv, unsigned int), base);
	else if (ft_strchr(vse->spec, 'h'))
		vse->towr = ft_itoa_b_u((unsigned long long)
				(unsigned short int)va_arg(argv, unsigned int), base);
	else if (ft_strcmp(vse->spec, "ll") == 0)
		vse->towr = ft_itoa_b_u(va_arg(argv, unsigned long long int), base);
	else if (ft_strchr(vse->spec, 'j') != 0)
		vse->towr = ft_itoa_b_u((unsigned long long)
				va_arg(argv, uintmax_t), base);
	else if (ft_strchr(vse->spec, 'z') != 0)
		vse->towr = ft_itoa_b_u((unsigned long long)
				va_arg(argv, size_t), base);
	if (vse->type == 'x')
		vse->towr = ft_tolowstr(vse->towr);
}

void		ft_d_i_d(va_list argv, t_vse *vse)
{
	if (vse->spec == NULL && vse->type != 'D')
		vse->towr = ft_itoa_b((long long)va_arg(argv, int), 10);
	else if (vse->type == 'D' || ft_strchr(vse->spec, 'l') != 0)
		vse->towr = ft_itoa_b((long long)va_arg(argv, long int), 10);
	else if (ft_strcmp(vse->spec, "hh") == 0)
		vse->towr = ft_itoa_b((long long)(char)va_arg(argv, int), 10);
	else if (ft_strchr(vse->spec, 'h') != 0)
		vse->towr = ft_itoa_b((long long)(short int)va_arg(argv, int), 10);
	else if (ft_strcmp(vse->spec, "ll") == 0)
		vse->towr = ft_itoa_b(va_arg(argv, long long int), 10);
	else if (ft_strchr(vse->spec, 'j') != 0)
		vse->towr = ft_itoa_b((long long)va_arg(argv, intmax_t), 10);
	else if (ft_strchr(vse->spec, 'z') != 0)
		vse->towr = ft_itoa_b((long long)va_arg(argv, size_t), 10);
}

void		ft_who_is_who(t_vse *vse, va_list argv)
{
	if (ft_strchr("sScC", vse->type))
		ft_str_char_type(argv, vse);
	else if (ft_strchr("Ddi", vse->type))
		ft_d_i_d(argv, vse);
	else if (ft_strchr("uU", vse->type))
		ft_digit_mod(argv, vse, 10);
	else if (ft_strchr("oO", vse->type))
		ft_digit_mod(argv, vse, 8);
	else if (ft_strchr("xX", vse->type))
		ft_digit_mod(argv, vse, 16);
	else if (ft_strchr("p", vse->type))
	{
		vse->towr = ft_itoa_b_u(va_arg(argv, uintmax_t), 16);
		ft_tolowstr(vse->towr);
	}
}

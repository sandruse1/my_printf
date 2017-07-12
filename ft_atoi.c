/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sandruse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 09:35:17 by sandruse          #+#    #+#             */
/*   Updated: 2017/03/24 19:15:10 by sandruse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int		ft_atoi(const char *str)
{
	int i;
	int k;
	int j;

	i = 0;
	k = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == 43 || str[i] == 45)
		j = str[i++];
	while (str[i] >= 48 && str[i] <= 57 && str[i])
		k = k * 10 + str[i++] - '0';
	if (j == 45)
		return (-k);
	return (k);
}

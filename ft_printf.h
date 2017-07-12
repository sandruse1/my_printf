/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sandruse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 11:13:50 by sandruse          #+#    #+#             */
/*   Updated: 2017/03/29 17:02:53 by sandruse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>
# include <string.h>
# include <wchar.h>

int	g_len;

typedef struct	s_vse
{
	int			nol;
	int			perstep;
	int			minus;
	int			plus;
	int			prob;
	int			sharp;
	int			toch;
	int			tocnum;
	int			shur;
	int			shunum;
	char		*spec;
	char		type;
	char		*towr;
	char		*line;
}				t_vse;

int				ft_printf(char *baza, ...);
void			ft_putchar_c(char s);
void			ft_putstr_count(char *s);
void			ft_putnbr_count(int nb);
void			ft_after_percent(char **str, va_list argv, t_vse *vse);
void			ft_help_hh(t_vse *vse);
char			*ft_itoa_b(long long value, int base);
char			*ft_itoa_b_u(unsigned long long value, int base);
void			ft_who_is_who(t_vse *vse, va_list argv);
char			*ft_strdup_bit(wint_t *str);
char			*ft_tolowstr(char *str);
void			ft_did_print(t_vse *vse);
void			ft_uo_print(t_vse *vse);
void			ft_p_print(t_vse *vse);
void			ft_cs_print(t_vse *vse);
int				ft_tolower(int c);
char			*ft_tolowstr(char *str);
int				ft_strcmp(const char *s1, const char *s2);
char			*ft_strchr(const char *s, int c);
void			*ft_memset(void *b, int c, size_t len);
char			*ft_itoa_b_u(unsigned long long value, int base);
char			*ft_itoa_b(long long value, int base);
void			ft_bzero(void *s, size_t n);
int				ft_atoi(const char *str);
int				ft_isdigit(int c);
char			*ft_strsub(char const *s, unsigned int start, size_t len);
int				ft_atoi_base(char *s2, int str_base);
int				ft_strlen(const char *s);
char			*ft_strnew(size_t size);
void			ft_capital(char *s);
void			ft_undef(t_vse *vse);
void			ft_undef_help(t_vse *vse, char *str);

#endif

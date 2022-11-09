/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mballa <mballa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 23:44:48 by mballa            #+#    #+#             */
/*   Updated: 2022/11/09 10:19:00 by mballa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>

int				ft_printf(const char *str, ...);
int				ft_putchar(char c);
int				ft_putstr(char *s);
int				ft_strlen(const char *str);
int				ft_putnbr(int nb);
int				ft_putnbr_base(unsigned long long nb, char *base);
unsigned int	ft_putnbrunsg(unsigned int nb);
int				ft_printpercen(void);
#endif

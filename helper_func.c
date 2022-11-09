/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper_func.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mballa <mballa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 07:57:06 by mballa            #+#    #+#             */
/*   Updated: 2022/11/09 10:33:34 by mballa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *s)
{
	if (s)
	{
		write(1, s, ft_strlen(s));
		return (ft_strlen(s));
	}
	write(1, "(null)", 6);
	return (6);
}

int	ft_putnbr(int nb)
{
	int				count;

	count = 0;
	if (nb == -2147483648)
		return (count += ft_putstr("-2147483648"));
	if (nb < 0)
	{
		nb = nb * (-1);
		count += ft_putchar('-');
	}
	if (nb >= 10)
	{
		count += ft_putnbr(nb / 10);
		return (count += ft_putchar(nb % 10 + '0'));
	}
	return (count += ft_putchar(nb % 10 + '0'));
}

int	ft_putnbr_base(unsigned long long nb, char *base)
{
	unsigned int	len_base;
	int				count;

	count = 0;
	len_base = 16;
	if (nb >= len_base)
	{
		count += ft_putnbr_base(nb / len_base, base);
	}
	return (count += ft_putchar(base[nb % len_base]));
}

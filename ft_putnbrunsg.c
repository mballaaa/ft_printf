/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrunsg.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mballa <mballa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 23:43:57 by mballa            #+#    #+#             */
/*   Updated: 2022/11/10 08:26:50 by mballa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	ft_putnbrunsg(unsigned int nb)
{
	int	count;

	count = 0;
	if (nb >= 10)
	{
		count += ft_putnbrunsg(nb / 10);
		return (count += ft_putchar(nb % 10 + '0'));
	}
	return (count += ft_putchar(nb + '0'));
}

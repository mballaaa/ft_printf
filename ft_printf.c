/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mballa <mballa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 18:07:31 by mballa            #+#    #+#             */
/*   Updated: 2022/11/10 10:20:00 by mballa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	ft_formats(va_list args, const char format)
{
	int		len;
	char	*base;

	base = "0123456789abcdef";
	len = 0;
	if (format == 'c')
		len += ft_putchar(va_arg(args, int));
	else if (format == 's')
		len += ft_putstr(va_arg(args, char *));
	else if (format == 'd' || format == 'i' )
		len += ft_putnbr(va_arg(args, int));
	else if (format == 'u')
		len += ft_putnbrunsg(va_arg(args, unsigned int));
	else if (format == 'x')
		len += ft_putnbr_base(va_arg(args, unsigned int), base);
	else if (format == 'X')
		len += ft_putnbr_base(va_arg(args, unsigned int), "0123456789ABCDEF");
	else if (format == 'p')
	{
		ft_putstr("0x");
		len += 2 + ft_putnbr_base(va_arg(args, unsigned long long), base);
	}
	else if (format == '%')
		len += ft_printpercen();
	return (len);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	args;
	int		len;

	i = 0;
	len = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			len += ft_formats(args, str[i + 1]);
			i++;
		}
		else
			len += ft_putchar(str[i]);
		i++;
		if (!str[i])
			break ;
	}
	va_end(args);
	return (len);
}
// int main()
// {
// 	// int a =99;
// 	// char s[]="sd";
// 	// char c='c';
//     //  ft_printf("%x",a);
// 	//int j=ft_printf("%u",42947295);
// 	//printf("%d",j);
	
// 	  //printf("%%%");
// 	 // printf("\n");
// 	 // printf("%%%");
// 	// int a =printf("%r");
// 	// printf("%d",a);
// 	int a=4;
// 	ft_printf("%p",&a);
// }
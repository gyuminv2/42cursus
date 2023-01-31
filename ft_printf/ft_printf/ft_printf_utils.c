/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyumpark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 14:51:13 by gyumpark          #+#    #+#             */
/*   Updated: 2022/04/01 14:51:17 by gyumpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_value(va_list *ap, char type)
{
	int	value;

	value = 0;
	if (type == 'c')
		value = ft_putchr(va_arg(*ap, int));
	else if (type == 's')
		value = ft_putstr(va_arg(*ap, char *));
	else if (type == 'p')
		value = ft_putstr("0x") + ft_form_p((unsigned long)va_arg(*ap, void *),
				"0123456789abcdef");
	else if (type == 'd' || type == 'i')
		value = ft_form_d_i(va_arg(*ap, int));
	else if (type == 'u')
		value = ft_form_u(va_arg(*ap, unsigned int), "0123456789");
	else if (type == 'X')
		value = ft_form_x_1(va_arg(*ap, unsigned int), "0123456789ABCDEF");
	else if (type == 'x')
		value = ft_form_x_2(va_arg(*ap, unsigned int), "0123456789abcdef");
	else if (type == '%')
		value = ft_putchr('%');
	return (value);
}

int	type_check(va_list *ap, const char *types, int *cnt)
{
	int	i;

	i = 0;
	*cnt = 0;
	while (types[i])
	{
		if (types[i] != '%')
		{
			*cnt += ft_putchr(types[i]);
		}
		else if (types[i + 1] && ft_strchr("cspdiuxX%", types[i + 1]))
		{
			*cnt += print_value(ap, types[i + 1]);
			i++;
		}
		i++;
	}
	return (*cnt);
}

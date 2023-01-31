/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_form_d_i.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyumpark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 14:50:52 by gyumpark          #+#    #+#             */
/*   Updated: 2022/04/01 14:50:54 by gyumpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_form_d_i(int i)
{
	int	res;
	int	cnt;

	res = i;
	cnt = 0;
	if (i == -2147483648)
	{
		cnt += ft_putchr('-') + 10;
		ft_putnbr(i);
		return (cnt);
	}
	if (res < 0)
	{
		res = -res;
		cnt += ft_putchr('-');
	}
	if (res == 0)
		cnt++;
	ft_putnbr(res);
	while (res > 0)
	{
		res = res / 10;
		cnt++;
	}
	return (cnt);
}

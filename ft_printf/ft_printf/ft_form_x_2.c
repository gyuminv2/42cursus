/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_form_x_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyumpark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 14:51:07 by gyumpark          #+#    #+#             */
/*   Updated: 2022/04/01 14:51:08 by gyumpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_form_x_2(unsigned int i, char *base)
{
	int	cnt;

	cnt = 0;
	if (i >= 16)
	{
		cnt += ft_form_p(i / 16, base);
		cnt += ft_form_p(i % 16, base);
	}
	else
		cnt += ft_putchr(base[i]);
	return (cnt);
}

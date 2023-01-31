/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_form_u.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyumpark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 14:51:01 by gyumpark          #+#    #+#             */
/*   Updated: 2022/04/01 14:51:03 by gyumpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_form_u(unsigned int i, char *base)
{
	int	cnt;

	cnt = 0;
	if (i >= 10)
	{
		cnt += ft_form_u(i / 10, base);
		cnt += ft_form_u(i % 10, base);
	}
	else
		cnt += ft_putchr(base[i]);
	return (cnt);
}

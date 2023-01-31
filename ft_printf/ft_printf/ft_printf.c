/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyumpark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 14:51:09 by gyumpark          #+#    #+#             */
/*   Updated: 2022/04/01 14:51:39 by gyumpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *types, ...)
{
	va_list	ap;
	int		cnt;

	if (!types)
		return (-1);
	va_start(ap, types);
	cnt = type_check(&ap, types, &cnt);
	va_end(ap);
	return (cnt);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyumpark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 14:52:10 by gyumpark          #+#    #+#             */
/*   Updated: 2022/04/01 14:52:11 by gyumpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putstr(char *str)
{
	int	cnt;

	cnt = 0;
	if (str == NULL)
	{
		cnt = write(1, "(null)", 6);
		return (cnt);
	}
	while (*str)
	{
		cnt = cnt + write(1, str, 1);
		str++;
	}
	return (cnt);
}

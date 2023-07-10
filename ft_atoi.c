/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdi-mari <sdi-mari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 18:00:56 by sdi-mari          #+#    #+#             */
/*   Updated: 2023/07/10 19:55:34 by sdi-mari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	max_nmb(int value, int flag, int j)
{
	value *= flag;
	if (j >= 20 && flag == 1)
		return (-1);
	else if (j >= 20 && flag == -1)
		return (0);
	else
		return (value);
}

int	ft_atoi(const char *nptr)
{
	int	i;
	int	flag;
	int	value;
	int	j;

	i = 0;
	j = 0;
	value = 0;
	flag = 1;
	while (((nptr[i] >= 9) && (nptr[i] <= 13)) || (nptr[i] == 32))
		i++;
	if (nptr[i] && nptr[i] == '-')
	{
		flag = -1;
		i++;
	}
	else if (nptr[i] && nptr[i] == '+')
		i++;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		value = (value * 10) + nptr[i] - '0';
		i++;
		j++;
	}
	return (max_nmb(value, flag, j));
}

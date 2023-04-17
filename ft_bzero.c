/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdi-mari <sdi-mari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 17:52:50 by sdi-mari          #+#    #+#             */
/*   Updated: 2023/04/17 18:40:34 by sdi-mari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void
	ft_bzero(void *s, size_t n)
{
	size_t	i;

	if (!s)
		return ;
		i = 0;
	while (i < n)
	{
		*(char *)(s + i) = 0;
		++i;
	}	
}

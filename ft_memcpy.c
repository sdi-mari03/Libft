/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdi-mari <sdi-mari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 18:45:48 by sdi-mari          #+#    #+#             */
/*   Updated: 2023/04/17 18:49:29 by sdi-mari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linft.h"

void
	*ft_memcpy(void *dest, const void *src, size_t n)
{
	siez_t	i;

	if (!dest)
		return (NULL);
	i = 0;
	while (i < n)
	{
		*(char *)(dest + i) = *(char *)(src + i);
		++i;
	}
	return (dest);
}

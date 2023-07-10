/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdi-mari <sdi-mari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 18:45:48 by sdi-mari          #+#    #+#             */
/*   Updated: 2023/07/10 19:49:37 by sdi-mari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int				i;
	unsigned char	*dest_p;
	const char		*src_p;

	if (dest == NULL && src == NULL)
		return (NULL);
	if (n == 0)
		return (dest);
	i = 0;
	dest_p = dest;
	src_p = src;
	while (n > 0)
	{
		dest_p[i] = src_p[i];
		i++;
		n--;
	}
	return (dest);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdi-mari <sdi-mari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 12:02:52 by sdi-mari          #+#    #+#             */
/*   Updated: 2023/07/10 19:50:34 by sdi-mari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	d_len;

	if ((!dst || !src) && size == 0)
		return (0);
	i = 0;
	d_len = ft_strlen(dst);
	if (size > d_len)
	{
		while (src[i] != 0 && i < size - d_len - 1)
		{
			dst[d_len + i] = src[i];
			i++;
		}
		dst[i + d_len] = '\0';
		return (d_len + ft_strlen(src));
	}
	return (size + ft_strlen(src));
}

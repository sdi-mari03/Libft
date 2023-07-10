/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdi-mari <sdi-mari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 16:36:16 by sdi-mari          #+#    #+#             */
/*   Updated: 2023/07/10 19:50:10 by sdi-mari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*k1;
	unsigned char	*k2;
	size_t			i;

	k1 = (unsigned char *)s1;
	k2 = (unsigned char *)s2;
	i = 0;
	while (i < n && (k1[i] != '\0' || k2[i] != '\0'))
	{
		if (k2[i] != k1[i])
			return (k1[i] - k2[i]);
		i++;
	}
	return (0);
}

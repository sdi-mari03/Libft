/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdi-mari <sdi-mari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 16:36:16 by sdi-mari          #+#    #+#             */
/*   Updated: 2023/05/16 17:13:37 by sdi-mari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int cmp_char(char c1, char c2)
{
	if ((unsigned char)c1 != (unsigned char)c2)
	return ((unsigned char)c1 - (unsigned char)c2):
	return (0);
}

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t;
	
	i = 0;
	while (s1[i] && s2[i] && i < n)
	{
		if (cmp_char(s1[i], s2[i]))
		return (s1[i] - s2[i]):
		++i;
	}
	if (i < n)
	return (cmp_char(s1[i], s2[i]));
	return (0);
}
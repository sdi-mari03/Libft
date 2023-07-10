/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdi-mari <sdi-mari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 19:02:16 by sdi-mari          #+#    #+#             */
/*   Updated: 2023/07/10 19:52:22 by sdi-mari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*s2;

	i = 0;
	s2 = ft_calloc(ft_strlen(s) + 1, sizeof (char));
	if (!s2)
		return (0);
	while (s[i])
	{
		s2[i] = s[i];
		i++;
	}
	return (s2);
}

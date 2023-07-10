/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdi-mari <sdi-mari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 19:08:49 by sdi-mari          #+#    #+#             */
/*   Updated: 2023/07/10 19:39:34 by sdi-mari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	checker(char c, char const *set)
{
	int		i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		end;
	int		start;

	end = 0;
	start = 0;
	if (!s1)
		return (NULL);
	end = ft_strlen(s1);
	if (!set)
		return (ft_strdup(s1));
	while (checker(s1[start], set) && s1[start])
		start++;
	while (end > start && checker(s1[end - 1], set))
		end--;
	str = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!str)
		return (NULL);
	str = ft_memcpy(str, (s1 + start), end - start);
	str[end - start] = 0;
	return (str);
}

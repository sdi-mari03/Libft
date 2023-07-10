/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdi-mari <sdi-mari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 20:45:25 by sdi-mari          #+#    #+#             */
/*   Updated: 2023/07/10 19:39:12 by sdi-mari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char ))
{
	unsigned int	i;
	char			*str;

	i = 0;
	if (!s)
		return (0);
	str = malloc(ft_strlen(s) + 1);
	if (!str)
		return (0);
	while (s[i])
	{
		str[i] = (f(i, *((char *)(s + i))));
		i++;
	}
	str[i] = '\0';
	return (str);
}

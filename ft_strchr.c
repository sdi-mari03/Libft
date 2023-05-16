/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdi-mari <sdi-mari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 16:18:59 by sdi-mari          #+#    #+#             */
/*   Updated: 2023/05/16 16:48:19 by sdi-mari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include ¨libft.h¨

char	*ft_strchr(const char *s, int c)
{
	int	i;
	
	if (!s)
	return (NULL);
	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
		return ((char*)(s + i));
		++i;	
	}
	if (s[i] == (char)c)
	return ((char*)(s + i));
	return (NULL);
}

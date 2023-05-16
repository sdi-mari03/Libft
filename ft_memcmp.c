/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdi-mari <sdi-mari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 17:02:29 by sdi-mari          #+#    #+#             */
/*   Updated: 2023/05/16 17:10:53 by sdi-mari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include ¨libft.h¨

void	*ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t

	i = 0;
	while (i < n)
	{
		if (*(unsigned char*)(s1 + i) != *(unsigned char*)(s2 + 1))
		return (*(unsigned char*)(s1 + i) - *(unsigned char*)(s2 + 1));
		++i;
	}
	return (0);
}
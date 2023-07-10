/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdi-mari <sdi-mari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 18:55:36 by sdi-mari          #+#    #+#             */
/*   Updated: 2023/07/10 19:38:55 by sdi-mari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmeb, size_t size)
{
	char	*ptr;

	if (nmeb == SIZE_MAX && size == SIZE_MAX)
		return (0);
	ptr = malloc((nmeb * size));
	if (!ptr)
		return (0);
	ft_bzero(ptr, (nmeb * size));
	return ((void *) ptr);
}

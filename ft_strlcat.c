/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 14:52:14 by cjimenez          #+#    #+#             */
/*   Updated: 2021/12/01 15:55:09 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	k = ft_strlen(dst);
	j = ft_strlen(src);
	if (dstsize <= k)
		return (j + dstsize);
	while (i < dstsize - k - 1 && src[i])
	{	
		dst[k + i] = src[i];
		i++;
	}
	dst[k + i] = '\0';
	return (k + j);
}

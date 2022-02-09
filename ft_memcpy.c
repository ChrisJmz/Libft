/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:02:33 by cjimenez          #+#    #+#             */
/*   Updated: 2021/12/01 15:04:30 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*j;
	char	*k;

	j = (char *) dst;
	k = (char *) src;
	i = 0;
	if (src == NULL && dst == NULL)
		return (NULL);
	while (i < n)
	{
		j[i] = k[i];
		i++;
	}
	return (dst);
}

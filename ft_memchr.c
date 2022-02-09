/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 11:54:13 by cjimenez          #+#    #+#             */
/*   Updated: 2021/12/01 13:28:50 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*j;

	i = 0;
	j = (unsigned char *) s;
	while (i < n)
	{
		if (j[i] == (unsigned char)c)
			return (&j[i]);
		i++;
	}
	return (NULL);
}

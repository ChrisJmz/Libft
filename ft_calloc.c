/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 15:32:28 by cjimenez          #+#    #+#             */
/*   Updated: 2021/12/01 14:53:42 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	size_t	total;
	char	*p;

	i = 0;
	total = count * size;
	p = malloc(total);
	if (p == NULL)
		return (NULL);
	while (i < total)
	{
		p[i] = 0;
		i++;
	}
	return (p);
}

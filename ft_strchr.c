/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 16:02:34 by cjimenez          #+#    #+#             */
/*   Updated: 2021/12/01 16:13:11 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*p;

	i = 0;
	p = (char *)s;
	while (s[i])
	{
		if (s[i] == (char)c)
			return (p);
		i++;
		p++;
	}
	if (s[i] == '\0' && c == '\0')
		return (p);
	return (NULL);
}

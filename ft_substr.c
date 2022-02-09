/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 10:51:06 by cjimenez          #+#    #+#             */
/*   Updated: 2021/12/07 12:29:10 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	maxlen(const char *s, size_t len)
{
	size_t	i;

	i = 0;
	while (len > i && s[i])
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*p;

	i = 0;
	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
	{
		p = malloc(sizeof(char) * 1);
		if (p == NULL)
			return (NULL);
		p[0] = '\0';
		return (p);
	}
	p = malloc(sizeof(char) * (maxlen(s, len) + 1));
	if (p == NULL)
		return (NULL);
	while (i < len && s[start])
	{
		p[i] = s[start];
		i++;
		start++;
	}
	p[i] = '\0';
	return (p);
}

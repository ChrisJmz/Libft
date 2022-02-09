/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 14:09:40 by cjimenez          #+#    #+#             */
/*   Updated: 2021/12/07 11:48:14 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_check(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i++] == c)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		k;
	char	*p;

	i = 0;
	j = 0;
	if (!s1)
		return (NULL);
	k = ft_strlen(s1);
	while (s1[j] && ft_check(s1[j], set))
		j++;
	while (k > j && ft_check(s1[k - 1], set))
		k--;
	p = malloc(sizeof(char) * (k - j + 1));
	if (!p)
		return (NULL);
	while (j < k)
		p[i++] = s1[j++];
	p[i] = '\0';
	return (p);
}

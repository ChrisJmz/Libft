/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 14:46:10 by cjimenez          #+#    #+#             */
/*   Updated: 2021/12/07 10:03:07 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_countword(const char *s, char c)
{
	int	word;
	int	check;

	word = 0;
	check = 0;
	while (*s == c)
		s++;
	while (*s)
	{
		if (*s != c && check == 0)
		{
			check = 1;
			word++;
		}
		else if (*s == c)
			check = 0;
		s++;
	}
	return (word);
}

char	*tab2(char const *s, int i, char c)
{
	int		letter;
	int		k;
	int		j;
	char	*word;

	letter = 0;
	j = 0;
	k = i;
	while (s[k] != c && s[k] != '\0')
	{	
		letter++;
		k++;
	}
	word = malloc(sizeof(char) * (letter + 1));
	if (!word)
		return (NULL);
	while (s[i] != c && s[i] != '\0')
	{
		word[j] = s[i];
		i++;
		j++;
	}
	word[j] = 0;
	return (word);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**tab;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	tab = malloc(sizeof(char *) * (ft_countword(s, c) + 1));
	if (!tab)
		return (NULL);
	while (s[i] != '\0' && s[i] == c)
		i++;
	while (s[i] != '\0' && j < ft_countword(s, c))
	{
		tab[j] = tab2(s, i, c);
		while (s[i] != c && s[i] != '\0')
			i++;
		while (s[i] == c && s[i] != '\0')
			i++;
		j++;
	}
	tab[j] = NULL;
	return (tab);
}

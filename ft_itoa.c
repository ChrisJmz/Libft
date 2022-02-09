/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 12:15:23 by cjimenez          #+#    #+#             */
/*   Updated: 2021/12/06 15:09:27 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	size(int n)
{
	int	i;

	i = 0;
	if (n < 0)
		n *= -1;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

int	ft_hitoa(char *tab, long int nb, int i, int count)
{
	if (nb < 0)
	{
		nb *= -1;
		tab[0] = '-';
		i++;
	}
	tab[count] = '\0';
	while (count-- > i)
	{
		tab[count] = (nb % 10) + '0';
		nb /= 10;
	}
	return (nb);
}

char	*ft_itoa(int n)
{
	int			i;
	int			count;
	char		*tab;
	long int	nb;

	i = 0;
	nb = n;
	count = size(nb);
	if (nb < 0 || count == 0)
		count++;
	tab = malloc(sizeof(char) * count + 1);
	if (!tab)
		return (NULL);
	ft_hitoa(tab, nb, i, count);
	return (tab);
}

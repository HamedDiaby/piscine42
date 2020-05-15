/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkoumba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 18:11:53 by hkoumba           #+#    #+#             */
/*   Updated: 2019/09/19 19:28:03 by hkoumba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *tab;
	int tab_size;
	int i;

	if (min >= max)
	{
		tab = NULL;
		return (0);
	}
	tab_size = max - min;
	if (!(tab = malloc(sizeof(*tab) * tab_size)))
		return (0);
	i = 0;
	tab[i] = min;
	while (i < tab_size)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}

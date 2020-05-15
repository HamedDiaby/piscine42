/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkoumba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 11:13:21 by hkoumba           #+#    #+#             */
/*   Updated: 2019/09/19 19:25:28 by hkoumba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int range_size;
	int *tab;
	int i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	range_size = max - min;
	if (!(tab = malloc(sizeof(*range) * range_size)))
		return (-1);
	i = 0;
	while (i < range_size)
	{
		tab[i] = min + i;
		i++;
	}
	*range = tab;
	return (i);
}

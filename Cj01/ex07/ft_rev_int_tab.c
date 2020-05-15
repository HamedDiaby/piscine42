/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkoumba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 09:59:56 by hkoumba           #+#    #+#             */
/*   Updated: 2019/09/01 10:59:51 by hkoumba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int j;
	int tab2[size];

	i = 0;
	while (i < size)
	{
		tab2[i] = tab[i];
		i++;
	}
	i = 0;
	j = size - 1;
	while (i < size)
	{
		tab[i] = tab2[j];
		j--;
		i++;
	}
}

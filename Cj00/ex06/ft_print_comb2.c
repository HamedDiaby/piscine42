/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkoumba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 15:18:29 by hkoumba           #+#    #+#             */
/*   Updated: 2019/09/01 16:14:38 by hkoumba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	pairs(int nb)
{
	int firstpair;
	int secondpair;

	if (nb > 9)
	{
		firstpair = nb / 10;
		secondpair = nb % 10;
		ft_putchar(firstpair + 48);
		ft_putchar(secondpair + 48);
	}
	else
	{
		ft_putchar('0');
		ft_putchar(nb + 48);
	}
}

void	ft_print_comb2(void)
{
	int i;
	int j;

	i = 0;
	while (i <= 99)
	{
		j = i + 1;
		while (j <= 99)
		{
			pairs(i);
			ft_putchar(' ');
			pairs(j);
			if (i < 98 || j < 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			j++;
		}
		i++;
	}
}

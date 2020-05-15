/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkoumba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 15:45:11 by hkoumba           #+#    #+#             */
/*   Updated: 2019/09/02 11:52:39 by hkoumba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		length_nb(int nb)
{
	int cmp;

	cmp = 1;
	while (nb / 10 != 0)
	{
		nb = nb / 10;
		cmp = cmp * 10;
	}
	return (cmp);
}

void	ft_putnbr(int nb)
{
	long int length;
	long int lnb;

	lnb = nb;
	length = length_nb(lnb);
	if (nb < 0)
	{
		lnb = lnb * (-1);
		ft_putchar('-');
		while (length != 0)
		{
			ft_putchar(lnb / length + '0');
			lnb = lnb % length;
			length = length / 10;
		}
	}
	else
	{
		while (length != 0)
		{
			ft_putchar(nb / length + '0');
			nb = nb % length;
			length = length / 10;
		}
	}
}

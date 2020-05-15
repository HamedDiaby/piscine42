/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkoumba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 15:05:28 by hkoumba           #+#    #+#             */
/*   Updated: 2019/09/19 13:23:01 by hkoumba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int				i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		check_base(char *base)
{
	int				i;
	int				j;

	i = 0;
	j = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i] != '\0')
	{
		j = i + 1;
		if (base[i] == '-' || base[i] == '+')
			return (0);
		if (base[i] < ' ' || base[i] > '~')
			return (0);
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	nbr;

	if (nb < 0)
	{
		ft_putchar('-');
		nbr = nb;
	}
	else
		nbr = nb;
	if (nbr >= 10)
		ft_putnbr(nbr / 10);
	ft_putchar(nbr % 10 + 48);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int				size_base;
	int				i;
	long int		lnbr;

	i = 0;
	lnbr = nbr;
	size_base = ft_strlen(base);
	if (check_base(base) == 1)
	{
		if (lnbr < 0)
		{
			lnbr = lnbr * (-1);
			ft_putchar('-');
		}
		if (lnbr >= size_base)
			ft_putnbr_base(lnbr / size_base, base);
		ft_putnbr(lnbr % size_base);
	}
}

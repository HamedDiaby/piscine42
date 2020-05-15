/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkoumba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 10:28:48 by hkoumba           #+#    #+#             */
/*   Updated: 2019/09/15 12:47:21 by hkoumba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int i;
	int result;

	i = 1;
	result = 1;
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else
	{
		while (power >= i)
		{
			result = result * nb;
			i++;
		}
		return (result);
	}
}

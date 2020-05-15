/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkoumba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 20:41:52 by hkoumba           #+#    #+#             */
/*   Updated: 2019/09/14 10:25:43 by hkoumba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int result;
	int i;

	i = 1;
	result = 1;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	while (nb >= i)
	{
		if (nb <= 12 && nb >= 1)
		{
			result = result * i;
			i++;
		}
		else
			return (0);
	}
	return (result);
}

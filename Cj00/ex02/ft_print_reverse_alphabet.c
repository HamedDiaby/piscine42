/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkoumba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 13:17:50 by hkoumba           #+#    #+#             */
/*   Updated: 2019/08/30 14:01:28 by hkoumba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int lettre;

	lettre = 'z';
	while (lettre >= 'a')
	{
		write(1, &lettre, 1);
		lettre--;
	}
}

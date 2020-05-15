/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkoumba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 21:25:48 by hkoumba           #+#    #+#             */
/*   Updated: 2019/09/08 10:52:13 by hkoumba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned	int i;
	unsigned	int j;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0' && j < (size - 1))
	{
		dest[j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (i);
}

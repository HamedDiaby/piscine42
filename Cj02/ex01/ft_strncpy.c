/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkoumba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 17:33:33 by hkoumba           #+#    #+#             */
/*   Updated: 2019/09/08 10:17:09 by hkoumba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned		int i;
	int					j;

	i = 0;
	j = 0;
	while (i < n)
	{
		if (src[i] == '\0' || j == 1)
		{
			dest[i] = '\0';
			j = 1;
		}
		else
		{
			dest[i] = src[i];
		}
		i++;
	}
	return (dest);
}

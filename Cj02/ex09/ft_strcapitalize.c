/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkoumba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 17:48:46 by hkoumba           #+#    #+#             */
/*   Updated: 2019/09/08 10:53:52 by hkoumba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		else
			str[i] = str[i];
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	str = ft_strlowcase(str);
	i = 0;
	while (str[i] < 'a' || str[i] > 'z')
	{
		i++;
	}
	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] = str[i] - 32;
		i = 1;
	}
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z')
		{
			if (str[i] >= '0' && str[i] <= '9')
				str[i + 1] = str[i + 1];
			else if (str[i + 1] > 'a' && str[i] < 'z')
				str[i + 1] = str[i + 1] - 32;
		}
		i++;
	}
	return (str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkoumba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 18:21:03 by hkoumba           #+#    #+#             */
/*   Updated: 2019/09/19 19:11:16 by hkoumba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int			ft_strtotalcount(char **strs, char *sep, int size)
{
	int i;
	int j;
	int totalcount;

	i = 0;
	j = 0;
	totalcount = 0;
	while (i < size)
		totalcount += ft_strlen(strs[i++]);
	i = 0;
	while (i < size - 1)
	{
		totalcount += ft_strlen(sep);
		i++;
	}
	return (totalcount);
}

int			ft_concatsep(char *strconcat, char *sep, int cursor)
{
	int i;

	i = 0;
	while (sep[i])
	{
		strconcat[cursor + i] = sep[i];
		i++;
	}
	return (cursor + i);
}

void		ft_concat_all(char **strs, char *concat, int *counter, int *strcur)
{
	int cursor;

	cursor = *strcur;
	while (strs[counter[0]][counter[1]])
		concat[cursor++] = strs[counter[0]][counter[1]++];
	*strcur = cursor;
}

char		*ft_strjoin(int size, char **strs, char *sep)
{
	int		counter_i_j[2];
	int		strcursor;
	int		totalcount;
	char	*strconcat;

	counter_i_j[0] = 0;
	counter_i_j[1] = 0;
	strcursor = 0;
	totalcount = 0;
	strconcat = (char *)malloc(sizeof(char) * 1);
	if (size > 0)
	{
		totalcount = ft_strtotalcount(strs, sep, size) + 1;
		strconcat = (char *)malloc(sizeof(char) * totalcount);
		while (counter_i_j[0] < size)
		{
			ft_concat_all(strs, strconcat, counter_i_j, &strcursor);
			if (counter_i_j[0] < size - 1)
				strcursor = ft_concatsep(strconcat, sep, strcursor);
			counter_i_j[1] = 0;
			counter_i_j[0]++;
		}
	}
	strconcat[strcursor] = '\0';
	return (strconcat);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odiez-gu <odiez-gu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 17:15:10 by odiez-gu          #+#    #+#             */
/*   Updated: 2025/11/24 12:31:33 by odiez-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_join_len(char **strs, char *sep, int size)
{
	int	count;
	int	i;
	int	j;
	int	sep_len;

	count = 0;
	i = 0;
	while (size > i)
	{
		j = 0;
		while (strs[i][j])
		{
			count++;
			j++;
		}
		i++;
	}
	sep_len = ft_strlen(sep);
	return (count + (size - 1) * sep_len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		c;
	int		s;
	int		total;
	char	*join;

	if (size <= 0)
	{
		join = (char *)malloc(1 * sizeof(char));
		if (!join)
			return (0);
		join[0] = '\0';
		return (join);
	}
	total = ft_join_len(strs, sep, size);
	join = (char *)malloc(total + 1 * sizeof(char));
	if (!join)
		return (0);
	c = 0;
	i = 0;
	while (size > i)
	{
		j = 0;
		while (strs[i][j])
			join[c++] = strs[i][j++];
		s = 0;
		if (i < size - 1)
			while (sep[s])
				join[c++] = sep[s++];
		i++;
	}
	join[c] = '\0';
	return (join);
}
/*#include <stdio.h>

int	main(void)
{
	char	sep[] = {"-"};
	char	*strs[] = {"Hello"};
	int		size;
	char	*join;

	size = 1;
	join = ft_strjoin(size, strs, sep);
	printf("Join string with '%s' separator: %s\n", sep, join);
	free(join);
	return (0);
}*/

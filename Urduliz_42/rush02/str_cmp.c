/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_cmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odiez-gu <odiez-gu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 12:11:27 by odiez-gu          #+#    #+#             */
/*   Updated: 2025/11/09 18:21:47 by odiez-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <stdio.h>
#include <unistd.h>

void				divide_to_do_pending(int *to_do,unsigned long long *pending);

int	ft_strlen(char *str)
{
	int	size;

	size = 0;
	while (str[size])
	{
		size++;
	}
	return (size);
}

bool	ft_strdiff(char *s1, char *s2, int size)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && i < size - 1)
	{
		i++;
	}
	if (i == size - 1)
	{
		return (false);
	}
	return (true);
}

bool	ft_cmp(char *s1, char *s2)
{
	int		counts1;
	int		counts2;
	bool	diff;

	counts1 = ft_strlen(s1);
	counts2 = ft_strlen(s2);
	if (counts1 > counts2)
		return (true);
	else if (counts1 < counts2)
		return (false);
	else
	{
		diff = ft_strdiff(s1, s2, counts1);
		return (diff);
	}
}

unsigned long long	ft_atoi(char *str)
{
	int					i;
	unsigned long long	res;
	int					value;

	i = 0;
	res = 0;
	while (str[i])
	{
		value = str[i] - '0';
		res = (res * 10) + value;
		i++;
	}
	return (res);
}

int	main(int argc, char *argv[])
{
	char				*value;
	bool				is_large_nb;
	int					to_do;
	unsigned long long	pending;

	is_large_nb = false;
	value = argv[argc - 1];
	is_large_nb = ft_cmp(value, "18446744073709551615");
	if (!is_large_nb)
	{
		pending = ft_atoi(value);
		printf("%llu\n", pending);
		divide_to_do_pending(&to_do, &pending);
		printf("To Do ----> %d\n", to_do);
		printf("Pending ----> %llu\n", pending);
	}
	else
	{
		write(1, "TODO: Convertirlo a string, es muy grande.\n", 43);
	}
	return (0);
}

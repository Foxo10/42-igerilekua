/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odiez-gu <odiez-gu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 18:24:56 by odiez-gu          #+#    #+#             */
/*   Updated: 2025/11/17 19:18:13 by odiez-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && (s1[i] == s2[i]))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

void	ft_swap(char **str1, char **str2)
{
	char	*arg;

	arg = *str1;
	*str1 = *str2;
	*str2 = arg;
}

void	ft_print_params(int ac, char *av[])
{
	int	c;

	c = 1;
	while (c < ac)
	{
		ft_putstr(av[c]);
		write(1, "\n", 1);
		c++;
	}
}

int	main(int argc, char *argv[])
{
	int	c;
	int	j;

	c = 1;
	while (c < argc - 1)
	{
		j = c + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[c], argv[j]) > 0)
				ft_swap(&argv[c], &argv[j]);
			j++;
		}
		c++;
	}
	ft_print_params(argc, argv);
	return (0);
}

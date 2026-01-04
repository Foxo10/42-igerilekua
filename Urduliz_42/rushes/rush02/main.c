/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odiez-gu <odiez-gu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 18:41:19 by odiez-gu          #+#    #+#             */
/*   Updated: 2025/11/09 21:43:35 by odiez-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <stdio.h>
#include <unistd.h>

char	*divide_to_do_pending(char **nb, char **to_do);
int		ft_strlen(char *str);

bool	comp(char *str)
{
	int	iterator;

	iterator = 0;
	while (str[iterator] != '\0')
	{
		if (str[iterator] >= 48 && str[iterator] <= 57)
		{
			iterator++;
		}
		else
		{
			return (false);
		}
	}
	return (true);
}

int	main(int argc, char *argv[])
{
	char	*value;
	char	*to_do;
	int		is_number_1;

	if (argc == 2)
	{
		is_number_1 = comp(argv[1]);
		if (!is_number_1)
			write(2, "Error\n", 6);
		else
		{
			value = argv[1];
			printf("%s\n", value);
			divide_to_do_pending(&value, &to_do);
			printf("%s\n", to_do);
			printf("%s\n", value);
		}
	}
	else if (argc == 3)
	{
		is_number_1 = comp(argv[2]);
		if (!is_number_1)
			write(2, "Error\n", 6);
		else
			value = argv[2];
	}
	else
		write(2, "Error\n", 6);
}

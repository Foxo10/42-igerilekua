/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odiez-gu <odiez-gu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 18:04:37 by odiez-gu          #+#    #+#             */
/*   Updated: 2025/11/17 18:17:12 by odiez-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	main(int argc, char *argv[])
{
	int	c;

	c = 1;
	if (argc > 1)
	{
		while (c < argc)
		{
			ft_putstr(argv[c]);
			write(1, "\n", 1);
			c++;
		}
	}
	return (0);
}

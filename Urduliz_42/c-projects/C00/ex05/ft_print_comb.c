/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odiez-gu <odiez-gu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 11:19:53 by odiez-gu          #+#    #+#             */
/*   Updated: 2025/10/28 17:35:57 by odiez-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write_comb(char n100, char n10, char n1);

void	ft_print_comb(void)
{
	char	num_100;
	char	num_10;
	char	num_1;

	num_100 = '0';
	while (num_100 <= '7')
	{
		num_10 = num_100 + 1;
		while (num_10 <= '8')
		{
			num_1 = num_10 + 1;
			while (num_1 <= '9')
			{
				ft_write_comb(num_100, num_10, num_1);
				num_1 = num_1 + 1;
			}
			num_10 = num_10 + 1;
		}
		num_100 = num_100 + 1;
	}
}

void	ft_write_comb(char n100, char n10, char n1)
{
	if (n100 == '7' && n10 == '8' && n1 == '9')
	{
		write(1, &n100, 1);
		write(1, &n10, 1);
		write(1, &n1, 1);
	}
	else
	{
		write(1, &n100, 1);
		write(1, &n10, 1);
		write(1, &n1, 1);
		write(1, &", ", 2);
	}
}
/*
int	main(void)
{
	ft_print_comb();
	return (0);
}
*/

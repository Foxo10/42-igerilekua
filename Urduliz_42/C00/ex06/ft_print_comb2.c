/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odiez-gu <odiez-gu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 10:38:31 by odiez-gu          #+#    #+#             */
/*   Updated: 2025/11/19 23:19:00 by odiez-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write_comb2(int num_1, int num_2);
void	ft_put_comb2(int num_1, int num_2, int num_3, int num_4);
void	ft_print_comb2(void);

void	ft_print_comb2(void)
{
	int	num_1;
	int	num_2;

	num_1 = 0;
	while (num_1 <= 99)
	{
		num_2 = num_1 + 1;
		while (num_2 <= 99)
		{
			ft_write_comb2(num_1, num_2);
			num_2++;
		}
		num_1++;
	}
}

void	ft_write_comb2(int num_1, int num_2)
{
	int	i0;
	int	i1;
	int	i2;
	int	i3;

	i0 = num_1 / 10;
	i1 = num_1 % 10;
	i2 = num_2 / 10;
	i3 = num_2 % 10;
	ft_put_comb2(i0, i1, i2, i3);
}

void	ft_put_comb2(int num_1, int num_2, int num_3, int num_4)
{
	char	ch0;
	char	ch1;
	char	ch3;
	char	ch4;

	ch0 = num_1 + '0';
	ch1 = num_2 + '0';
	ch3 = num_3 + '0';
	ch4 = num_4 + '0';
	write(1, &ch0, 1);
	write(1, &ch1, 1);
	write(1, " ", 1);
	write(1, &ch3, 1);
	write(1, &ch4, 1);
	if (ch0 == '9' && ch1 == '8')
	{
	}
	else
	{
		write(1, ", ", 2);
	}
}

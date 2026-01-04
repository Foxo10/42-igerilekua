/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odiez-gu <odiez-gu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 16:14:51 by odiez-gu          #+#    #+#             */
/*   Updated: 2025/10/26 19:05:02 by odiez-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_check_char(int i, int j, int x, int y);
int		ft_check_x_y(int x, int y);

void	ft_check_char(int i, int j, int x, int y)
{
	x = x - 1;
	y = y - 1;
	if (i == 0 || i == y)
	{
		if (j == 0 || j == x)
		{
			ft_putchar('o');
		}
		else
		{
			ft_putchar('-');
		}
	}
	else
	{
		if (j == 0 || j == x)
		{
			ft_putchar('|');
		}
		else
		{
			ft_putchar(' ');
		}
	}
}

int	rush(int x, int y)
{
	int	i;
	int	j;
	int	check;

	check = ft_check_x_y(x, y);
	if (check == 1)
	{
		return (1);
	}
	i = 0;
	while (i < y)
	{
		j = 0;
		while (j < x)
		{
			ft_check_char(i, j, x, y);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}

int	ft_check_x_y(int x, int y)
{
	if (x < 0 || y < 0)
	{
		write(1, "No se admiten valores negativos.\n", 34);
		return (1);
	}
	else if (x * y >= 10000)
	{
		write(1, "Valores demasiado grandes.\n", 28);
		return (1);
	}
	else
	{
		return (0);
	}
}

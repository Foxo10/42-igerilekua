/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00_v4.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odiez-gu <odiez-gu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 12:31:23 by odiez-gu          #+#    #+#             */
/*   Updated: 2025/10/25 16:35:11 by odiez-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rush00(int y, int x);
void	ft_check_char(int i, int j, int y, int x);
void	ft_putchar(char ch);

int	main(void)
{
	ft_rush00(5, 3);
	ft_rush00(5, 1);
	ft_rush00(1, 1);
	ft_rush00(1, 5);
	ft_rush00(4, 4);
	return (0);
}

void	ft_putchar(char ch)
{
	write(1, &ch, 1);
}

/* 
	'x' e 'y' invertidos para que cuadre con el enunciado.
	-eje x -> número de columnas.
	-eje y -> número de filas.
*/
void	ft_rush00(int x, int y)
{
	int	i;
	int	j;

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
	write(1, "\n", 1);
}

void	ft_check_char(int i, int j, int x, int y)
{
	x = x - 1;
	y = y - 1;
	if (i == 0 || i == y)
	{
		if (j == 0 || j == x)
		{
			write(1, "°", 2);
		}
		else
		{
			write(1, "-", 1);
		}
	}
	else
	{
		if (j == 0 || j == x)
		{
			write(1, "|", 1);
		}
		else
		{
			write(1, " ", 1);
		}
	}
}

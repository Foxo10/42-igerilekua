/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc_rush.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odiez-gu <odiez-gu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 20:51:12 by odiez-gu          #+#    #+#             */
/*   Updated: 2025/10/24 21:45:59 by odiez-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_calc_rush(char letra)
{
	char	c;
	char	d;
	char	i;

	i = '0';
	c = 'a';
	while (c <= letra)
	{
		i++;
		c++;
	}
	write(1, &i, 1);
	d = '0' + (i % 5);
	write(1, &d, 1);
}

int	main(void)
{
	ft_calc_rush('o');
	return (0);
}

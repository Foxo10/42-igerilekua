/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odiez-gu <odiez-gu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 15:08:51 by odiez-gu          #+#    #+#             */
/*   Updated: 2025/11/13 15:15:36 by odiez-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	resul;

	if (power < 0)
		return (0);
	resul = 1;
	while (power >= 1)
	{
		resul = resul * nb;
		power--;
	}
	return (resul);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_iterative_power(2, 2));
	printf("%d\n", ft_iterative_power(10, 3));
	printf("%d\n", ft_iterative_power(2, -2));
	printf("%d\n", ft_iterative_power(5, 0));
	printf("%d\n", ft_iterative_power(-5, 3));
	return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odiez-gu <odiez-gu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 15:16:10 by odiez-gu          #+#    #+#             */
/*   Updated: 2025/11/13 17:21:51 by odiez-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	resul;

	resul = 1;
	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return (1);
	}
	if (power > 1)
	{
		resul = ft_recursive_power(nb, power - 1);
	}
	resul = resul * nb;
	return (resul);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_recursive_power(2, 2));
	printf("%d\n", ft_recursive_power(10, 3));
	printf("%d\n", ft_recursive_power(2, -2));
	printf("%d\n", ft_recursive_power(5, 0));
	printf("%d\n", ft_recursive_power(-5, 3));
	return (0);
}*/

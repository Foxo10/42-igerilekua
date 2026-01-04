/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odiez-gu <odiez-gu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 23:07:21 by odiez-gu          #+#    #+#             */
/*   Updated: 2025/11/19 23:14:24 by odiez-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	div;

	if (nb <= 1)
		return (0);
	div = 2;
	while (div <= nb / 2)
	{
		if (nb % div == 0)
			return (0);
		div++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (!ft_is_prime(nb))
		return (ft_find_next_prime(nb + 1));
	else
		return (nb);
}

/*#include <stdio.h>

int	main(void)
{
	printf("Next prime of 0 is %d\n", ft_find_next_prime(0));
	printf("Next prime of -5 is %d\n", ft_find_next_prime(-5));
	printf("Next prime of 10 is %d\n", ft_find_next_prime(10));
	printf("Next prime of 31 is %d\n", ft_find_next_prime(31));
	printf("Next prime of 121 is %d\n", ft_find_next_prime(121));
	return (0);
}*/

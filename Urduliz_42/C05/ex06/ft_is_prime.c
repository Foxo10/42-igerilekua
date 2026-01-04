/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odiez-gu <odiez-gu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 22:47:01 by odiez-gu          #+#    #+#             */
/*   Updated: 2025/11/19 23:09:21 by odiez-gu         ###   ########.fr       */
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

/*#include <stdio.h>

int	main(void)
{
	printf("0 is prime?: %d\n", ft_is_prime(0));
	printf("1 is prime?: %d\n", ft_is_prime(1));
	printf("67 is prime?: %d\n", ft_is_prime(67));
	printf("81 is prime?: %d\n", ft_is_prime(81));
	printf("101 is prime?: %d\n", ft_is_prime(101));
	return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odiez-gu <odiez-gu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 18:43:41 by odiez-gu          #+#    #+#             */
/*   Updated: 2025/11/19 01:04:49 by odiez-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	n;

	if (nb <= 0)
		return (0);
	n = 1;
	while (n * n <= nb)
	{
		if (n * n == nb)
			return (n);
		n++;
	}
	return (0);
}

/*#include <stdio.h>

int	main(void)
{
	printf("Square root of 121 is %d\n", ft_sqrt(121));
	printf("Square root of 0 is %d\n", ft_sqrt(0));
	printf("Square root of 25 is %d\n", ft_sqrt(25));
	printf("Square root of 10 is %d\n", ft_sqrt(10));
	printf("Square root of -25 is %d\n", ft_sqrt(-25));
	return (0);
}*/

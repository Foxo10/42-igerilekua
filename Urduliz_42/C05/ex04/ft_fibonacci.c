/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odiez-gu <odiez-gu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 17:22:37 by odiez-gu          #+#    #+#             */
/*   Updated: 2025/11/13 18:43:27 by odiez-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	else if (index == 1 || index == 2)
		return (1);
	else
	{
		index--;
		return (ft_fibonacci(index) + ft_fibonacci(index - 1));
	}
}

/*#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_fibonacci(-5));
	printf("%d\n", ft_fibonacci(0));
	printf("%d\n", ft_fibonacci(1));
	printf("%d\n", ft_fibonacci(3));
	printf("%d\n", ft_fibonacci(5));
	printf("%d\n", ft_fibonacci(7));
	return (0);
}*/

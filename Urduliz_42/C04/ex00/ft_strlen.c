/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odiez-gu <odiez-gu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 18:32:05 by odiez-gu          #+#    #+#             */
/*   Updated: 2025/11/17 14:26:22 by odiez-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return (count);
}

/*#include <stdio.h>

int	main(void)
{
	char	strin[] = "Piscina 41+1";

	printf("%d\n", ft_strlen(strin));
	return (0);
}*/
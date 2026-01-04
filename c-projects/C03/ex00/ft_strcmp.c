/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odiez-gu <odiez-gu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 19:32:04 by odiez-gu          #+#    #+#             */
/*   Updated: 2025/11/11 14:10:38 by odiez-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}

/*#include <stdio.h>

int	main(void)
{
	char	strin1[] = "hola";
	char	strin2[] = "hola1";

	printf("%d\n", ft_strcmp(strin1, strin2));
	printf("%d\n", ft_strcmp("", ""));
	printf("%d\n", ft_strcmp("Hol", "Hola"));
	printf("%d\n", ft_strcmp("Hola", "Hol"));
}*/

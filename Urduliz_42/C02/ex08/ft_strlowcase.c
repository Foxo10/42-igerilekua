/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odiez-gu <odiez-gu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 13:25:53 by odiez-gu          #+#    #+#             */
/*   Updated: 2025/11/06 12:05:21 by odiez-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] > 64 && str[i] < 91)
		{
			str[i] += 'a' - 'A';
		}
		i++;
	}
	return (str);
}

/*#include <stdio.h>

int	main(void)
{
	char	strin1[] = "ABCDEFGH";
	char	strin2[] = "aVcJeHgP";
	char	strin3[] = "A-D_)(Ce5F1G";
	char	strin4[] = "";

	printf("%s\n", ft_strlowcase(strin1));
	printf("%s\n", ft_strlowcase(strin2));
	printf("%s\n", ft_strlowcase(strin3));
	printf("%s\n", ft_strlowcase(strin4));
	return (0);
}*/

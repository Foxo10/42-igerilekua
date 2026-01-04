/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odiez-gu <odiez-gu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 13:21:16 by odiez-gu          #+#    #+#             */
/*   Updated: 2025/11/03 14:27:50 by odiez-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*int	main(void)
{
	char			strin1[] = "Hello";
	char			strin2[] = "World1";
	unsigned int	i;

	ft_strncpy(strin2, strin1, 3);
	write(1, strin2, 6);
	write(1, "\n", 1);
	ft_strncpy(strin2, strin1, 5);
	write(1, strin2, 6);
	write(1, "\n", 1);
	ft_strncpy(strin2, strin1, 7);
	write(1, strin2, 6);
	write(1, "\n", 1);
}*/

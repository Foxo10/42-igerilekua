/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odiez-gu <odiez-gu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 12:04:15 by odiez-gu          #+#    #+#             */
/*   Updated: 2025/11/06 12:05:31 by odiez-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char	*ptr;

	ptr = str;
	while (*ptr)
	{
		if (*ptr > 96 && *ptr < 123)
		{
			*ptr -= 'a' - 'A';
		}
		ptr++;
	}
	return (str);
}
/*#include <stdio.h>

int	main(void)
{
	char	strin1[] = "abcdefg";
	char	strin2[] = "aVcJeHgP";
	char	strin3[] = "a-b_)(cde5f1g";
	char	strin4[] = "";

	printf("%s\n", ft_strupcase(strin1));
	printf("%s\n", ft_strupcase(strin2));
	printf("%s\n", ft_strupcase(strin3));
	printf("%s\n", ft_strupcase(strin4));
	return (0);
}*/

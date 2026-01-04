/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odiez-gu <odiez-gu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 18:19:56 by odiez-gu          #+#    #+#             */
/*   Updated: 2025/11/06 11:59:36 by odiez-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		if (*str < 65 || *str > 90)
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/*int	main(void)
{
	char	ch;
	int		i;

	i = ft_str_is_uppercase("abCdefG");
	ch = i + '0';
	write(1, &ch, 1);
	write(1, "\n", 1);
	i = ft_str_is_uppercase("ACDDEFG");
	ch = i + '0';
	write(1, &ch, 1);
	write(1, "\n", 1);
	i = ft_str_is_uppercase("A B C");
	ch = i + '0';
	write(1, &ch, 1);
	write(1, "\n", 1);
	i = ft_str_is_uppercase("ASDFASasdfas_");
	ch = i + '0';
	write(1, &ch, 1);
	write(1, "\n", 1);
	return (0);
}*/

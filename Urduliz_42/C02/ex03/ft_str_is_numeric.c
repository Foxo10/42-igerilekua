/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odiez-gu <odiez-gu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 15:43:30 by odiez-gu          #+#    #+#             */
/*   Updated: 2025/11/03 18:02:32 by odiez-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if (*str < 48 || *str > 57)
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

	i = ft_str_is_numeric("abCdefG");
	ch = i + '0';
	write(1, &ch, 1);
	write(1, "\n", 1);
	i = ft_str_is_numeric("03425234580");
	ch = i + '0';
	write(1, &ch, 1);
	write(1, "\n", 1);
	i = ft_str_is_numeric("03@523580");
	ch = i + '0';
	write(1, &ch, 1);
	write(1, "\n", 1);
	i = ft_str_is_numeric("");
	ch = i + '0';
	write(1, &ch, 1);
	write(1, "\n", 1);
}*/

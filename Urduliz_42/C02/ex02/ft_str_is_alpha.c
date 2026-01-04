/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odiez-gu <odiez-gu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 14:30:26 by odiez-gu          #+#    #+#             */
/*   Updated: 2025/11/04 15:54:23 by odiez-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if (*str < 'A' || *str > 'z' || (*str < 'a' && *str > 'Z'))
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

	i = ft_str_is_alpha("abCdefG");
	ch = i + '0';
	write(1, &ch, 1);
	write(1, "\n", 1);
	i = ft_str_is_alpha("Ab$de&fG");
	ch = i + '0';
	write(1, &ch, 1);
	write(1, "\n", 1);
	i = ft_str_is_alpha("");
	ch = i + '0';
	write(1, &ch, 1);
	write(1, "\n", 1);
}*/

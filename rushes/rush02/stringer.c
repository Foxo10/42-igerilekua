/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stringer.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odiez-gu <odiez-gu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 19:02:25 by odiez-gu          #+#    #+#             */
/*   Updated: 2025/11/10 13:06:22 by odiez-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	size;

	size = 0;
	while (str[size])
	{
		size++;
	}
	return (size);
}

char	*ft_strcpy(char *dest, char *src)
{
	char	*ptr;

	ptr = dest;
	while (*src != '\0')
	{
		*ptr++ = *src++;
	}
	*ptr = '\0';
	return (dest);
}

void	ft_div_strings(char *nb, char *pending, char *to_do, int pos)
{
	int	i;
	int	j;

	i = 0;
	while (nb[i] && i < pos)
	{
		to_do[i] = nb[i];
		i++;
	}
	to_do[i] = '\0';
	i = pos;
	j = 0;
	while (nb[i])
	{
		pending[j] = nb[i];
		i++;
		j++;
	}
	pending[i] = '\0';
}

void	div_number(char *nb, int pos, int digits, char *todo)
{
	char	*to_do;
	char	*pending;

	pending = (char *)malloc((digits - pos + 1) * sizeof(char));
	to_do = (char *)malloc((pos + 1) * sizeof(char));
	ft_div_strings(nb, pending, to_do, pos);
	ft_strcpy(nb, pending);
	ft_strcpy(todo, to_do);
	free(pending);
	free(to_do);
}

void	divide_to_do_pending(char **nb, char **to_do)
{
	int	digits;
	int	div_pos;
	int	i;

	digits = ft_strlen(*nb);
	i = digits;
	div_pos = 0;
	while (i > 3)
	{
		i -= 3;
		div_pos += 3;
	}
	div_number(*nb, (digits - div_pos), digits, *to_do);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odiez-gu <odiez-gu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 13:16:16 by odiez-gu          #+#    #+#             */
/*   Updated: 2025/11/11 14:10:45 by odiez-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	equal;

	if (*to_find == '\0')
		return (str);
	i = 0;
	equal = 1;
	while (str[i] && equal != 0)
	{
		if (str[i] == to_find[0])
		{
			equal = ft_strncmp(&str[i], to_find, ft_strlen(to_find));
			if (equal == 0)
				return (&str[i]);
		}
		i++;
	}
	return (0);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%s\n", ft_strstr("42 Network 2021 twin", "tw"));
	printf("%s\n", ft_strstr("42 Network 2021 twin", "in"));
	printf("%s\n", ft_strstr("42 Network 2021 twin", "a"));
	printf("%s\n", ft_strstr("42 Network 2021 twin", ""));
	printf("%s\n", ft_strstr("42 Network 2021 twin", " "));
	return (0);
}*/

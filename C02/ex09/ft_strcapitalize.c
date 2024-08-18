/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnuno-da <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 00:26:09 by jnuno-da          #+#    #+#             */
/*   Updated: 2024/08/07 11:13:04 by jnuno-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if (str[c] >= 'A' && str[c] <= 'Z')
			str[c] = str[c] + 32;
		else
			c++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	c;
	
	if (!str)
		return (NULL);
	ft_strlowcase(str);
	c = 0;
	while (str[c] != '\0')
	{
		if (str[0] >= 'a' && str[0] <= 'z')
			str[0] = str[0] - 32;
		else if (((str[c] >= ' ' && str[c] <= '/')
				|| (str[c] >= ':' && str[c] <= '@')
				|| (str[c] >= '[' && str[c] <= '`')
				|| (str[c] >= '{' && str[c] <= 127))
			&& (str[c + 1] >= 'a' && str[c + 1] <= 'z'))
		{
			str[c + 1] = str[c + 1] - 32;
			c++;
		}
		else
			c++;
	}
	return (str);
}
#include <stdio.h>
 int     main(void)
 {
char *a = NULL;
         printf("%s",ft_strcapitalize(a));
}

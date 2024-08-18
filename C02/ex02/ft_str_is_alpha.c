/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnuno-da <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 17:57:39 by jnuno-da          #+#    #+#             */
/*   Updated: 2024/08/04 19:17:18 by jnuno-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	c;

	c = 0;
	if (str[c] == '\0')
		return (1);
	while (str[c] != '\0')
	{
		if ((str[c] >= 'A' && str[c] <= 'Z')
			|| (str[c] >= 'a' && str[c] <= 'z'))
			str++;
		else
			return (0);
	}
	return (1);
}
/*#include <stdio.h>
int	main(void)
{
	char a []={""};
	printf("%i",ft_str_is_alpha(a));
}*/

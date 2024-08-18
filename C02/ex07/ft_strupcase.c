/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnuno-da <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 23:56:53 by jnuno-da          #+#    #+#             */
/*   Updated: 2024/08/05 00:04:15 by jnuno-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if (str[c] >= 'a' && str[c] <= 'z')
			str[c] = str[c] - 32;
		else
			c++;
	}
	return (str);
}
/*#include <stdio.h>
int	main(void)
{
	char a []={"salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un"};
	printf("%s",ft_strupcase(a));
}*/

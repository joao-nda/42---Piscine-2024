/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnuno-da <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 00:06:18 by jnuno-da          #+#    #+#             */
/*   Updated: 2024/08/05 00:28:16 by jnuno-da         ###   ########.fr       */
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
/*#include <stdio.h>
int	main(void)
{
	char a []={"SAlut, COMmeNT TU VaS ? 42MOTS QUARANTE-DEUX; CINQUANTE+ET+UN%"};
	printf("%s",ft_strlowcase(a));
}*/

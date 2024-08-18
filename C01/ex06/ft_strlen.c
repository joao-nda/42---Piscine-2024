/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnuno-da <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 09:35:24 by jnuno-da          #+#    #+#             */
/*   Updated: 2024/08/02 10:06:34 by jnuno-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (*str)
	{
		str++;
		c++;
	}
	return (c);
}
/*#include <stdio.h>
int	main(void)
{
	char a []= "Hello";
	int c = ft_strlen(a);
	printf("%i",c);
}*/

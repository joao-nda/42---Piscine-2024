/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnuno-da <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 16:39:44 by jnuno-da          #+#    #+#             */
/*   Updated: 2024/08/11 19:44:03 by jnuno-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	c;

	c = 2;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (0);
	if (nb == 2)
		return (1);
	while (c < nb)
	{
		if (nb % c == 0)
			return (0);
		c++;
	}
	return (1);
}
/*#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char **argv)
{
	if (argc == 2)
		printf("%i", ft_is_prime(atoi(argv[1])));
}*/

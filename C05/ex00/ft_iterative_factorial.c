/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnuno-da <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 13:03:39 by jnuno-da          #+#    #+#             */
/*   Updated: 2024/08/12 22:42:08 by jnuno-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	f;

	f = nb;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (nb > 1)
	{
		f = f * (nb - 1);
		nb--;
	}
	return (f);
}
/*#include <stdio.h>
#include <stdlib.h>
int	main (int argc,char **argv)
{
	if (argc == 2)
		printf("%i",ft_iterative_factorial(atoi(argv[1])));
}*/

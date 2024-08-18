/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnuno-da <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 14:05:11 by jnuno-da          #+#    #+#             */
/*   Updated: 2024/08/13 00:03:16 by jnuno-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	f;

	f = nb;
	if (f < 0)
		return (0);
	if (f == 0)
		return (1);
	if (f > 1)
	{
		f = f * ft_recursive_factorial(nb - 1);
		nb --;
	}
	return (f);
}
/*#include <stdio.h>
#include <stdlib.h> 
int	main(int argc,char **argv)
{
	if (argc == 2)
		printf("%i",ft_recursive_factorial(atoi(argv[1])));
}*/

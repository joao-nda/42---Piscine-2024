/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnuno-da <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 19:32:52 by jnuno-da          #+#    #+#             */
/*   Updated: 2024/08/01 19:54:07 by jnuno-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	s;

	s = *a;
	*a = s / *b;
	*b = s % *b;
}
/*
int	main(void)
{
	int a;
	int b;

	a = 2;
	b = 2;
	ft_ultimate_div_mod(&a,&b);
	printf("%i \n",a);
	printf("%i",b);
}*/

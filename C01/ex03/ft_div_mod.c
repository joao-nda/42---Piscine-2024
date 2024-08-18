/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnuno-da <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 18:32:13 by jnuno-da          #+#    #+#             */
/*   Updated: 2024/08/01 19:31:19 by jnuno-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int a;
	int b;
	int *div;
	int *mod;
	int c;
	int d;

	div = &c;
	mod = &d;
	a = 2;
	b = 2;

	ft_div_mod(a,b,div,mod);
	printf("%i \n",c);
	printf("%i",d);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnuno-da <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 10:08:12 by jnuno-da          #+#    #+#             */
/*   Updated: 2024/08/04 15:06:43 by jnuno-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	c;

	c = 0;
	while (c < size)
	{
		temp = tab[c];
		tab[c] = tab[size - 1];
		tab[size - 1] = temp;
		c++;
		size--;
	}
}
/*#include <stdio.h>
int	main(void)
{
	int a [] = {0,1,2,3,4,5,6,7};
	int c = 0;
	ft_rev_int_tab(a,8);
	while (c != 8)
	{
		printf("%d",a[c]);
		c++;
	}
}*/

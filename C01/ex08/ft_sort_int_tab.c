/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnuno-da <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 18:09:45 by jnuno-da          #+#    #+#             */
/*   Updated: 2024/08/03 19:11:41 by jnuno-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	i;
	int	c;

	c = 0;
	while (c < size)
	{
		i = c + 1;
		while (i < size)
		{
			if (tab[c] > tab[i])
			{
				temp = tab[c];
				tab[c] = tab[i];
				tab[i] = temp;
			}
			i++;
		}
		c++;
	}
}
/*#include <stdio.h>
int     main(void)
{
         int a [] = {2,5,3,4,9,8,6,7};
         int c = 0;
         ft_sort_int_tab(a,8);
         while (c != 8)
         {
                 printf("%d",a[c]);
                 c++;
         }
}*/

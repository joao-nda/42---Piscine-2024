/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnuno-da <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 10:57:18 by jnuno-da          #+#    #+#             */
/*   Updated: 2024/08/17 11:58:08 by jnuno-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	range[0] = malloc((sizeof (int)) * ((max - min) + 1));
	if (min >= max)
	{
		range[0] = NULL;
		return (0);
	}
	while (min < max)
	{
		range[0][i] = min;
		min++;
		i++;
	}
	range[0][i] = '\0';
	if (! range[0])
		return (-1);
	return (i);
}
/*#include <stdio.h>
int	main(void)
{
	int	i = 0;
	int	min = 10;
	int	max = 2;
	int	size = (max - min);
	int 	**range;
	int res = ft_ultimate_range(range, min, max);
	
	while(i < size)
	{
		printf("%d, %d\n", res, range[0][i]);
		i++;
	}	
}*/

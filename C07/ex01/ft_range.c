/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnuno-da <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 18:53:16 by jnuno-da          #+#    #+#             */
/*   Updated: 2024/08/16 10:47:04 by jnuno-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;

	i = 0;
	arr = malloc((sizeof (int)) * ((max - min) + 1));
	if (min >= max)
		return (NULL);
	else
	{
		while (min < max)
		{
			arr[i] = min;
			min++;
			i++;
		}
		arr[i] = '\0';
		return (arr);
	}
	return (0);
}
/*#include <stdio.h>
int	main(void)
{
	int	i = 0;;
	int	min = -5;
	int	max = 10;
	int	size = (max - min);
	int *arr = ft_range(min, max);
	
	while(i < size)
	{
		printf("%d, ", arr[i]);
		i++;
	}	
}*/

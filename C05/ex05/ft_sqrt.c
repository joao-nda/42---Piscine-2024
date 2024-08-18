/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnuno-da <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 16:08:30 by jnuno-da          #+#    #+#             */
/*   Updated: 2024/08/13 23:32:45 by jnuno-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_sqrt(int nb)
{
	long	i;
	long	res;

	i = 2;
	res = 1;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	while (i < nb)
	{
		if (nb % i == 0)
			res = i;
		else if (res * res == nb)
			return (res);
		i++;
	}
	return (0);
}
/*int	main(void)
{
	printf("%d\n", ft_sqrt(9));
	printf("%d\n", ft_sqrt(-5));
	printf("%d\n", ft_sqrt(6 * 6));
	printf("%d\n", ft_sqrt(7 * 7));
	printf("%d\n", ft_sqrt(1));
	printf("%d\n", ft_sqrt(2058910729));
	printf("%d\n", ft_sqrt(46340 * 46340));
	printf("%d\n", ft_sqrt(2147483647));
}*/

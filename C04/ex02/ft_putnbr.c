/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnuno-da <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 13:53:32 by jnuno-da          #+#    #+#             */
/*   Updated: 2024/08/08 14:59:02 by jnuno-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write (1, &a, 1);
}

void	ft_putnbr(int nb)
{
	long	n;

	n = nb;
	if (n < 0)
	{
		ft_putchar ('-');
		n = n * -1;
	}
	if (n > 9)
	{
		ft_putnbr (n / 10);
		n = n % 10;
	}
	ft_putchar(n + 48);
}
/*int	main(void)
{
	ft_putnbr(-2147483648);
}*/

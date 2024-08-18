/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnuno-da <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 22:54:17 by jnuno-da          #+#    #+#             */
/*   Updated: 2024/08/15 14:11:21 by jnuno-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_strcmp(char **argv, int i, int j)
{
	char	*t;
	int		s;

	s = 0;
	while (argv[i][s] == argv[j][s] && argv[i][s] != '\0' && argv[j][s] != '\0')
	{
		s++;
	}
	if ((argv[i][s] - argv[j][s]) > 0)
	{
		t = argv[i];
		argv[i] = argv[j];
		argv[j] = t;
	}
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	if (argc > 0)
	{
		while (argv[i] != 0)
		{
			j = i + 1;
			while (argv[j] != 0)
			{
				ft_strcmp(argv, i, j);
				j++;
			}
			i++;
		}
	}
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		i++;
	}
}

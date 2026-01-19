/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-jes <lude-jes@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 20:27:59 by lude-jes          #+#    #+#             */
/*   Updated: 2026/01/19 20:32:50 by lude-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putchar(char c)
{
	return (write (1, &c, 1));
}

int	main(int ac, char **av)
{
	int i = 0, j;

	int lookup[256] = {};
	if (ac == 3)
	{
		while (av[1][i])
		{
			j = 0;
			while (av[2][j])
			{
				if (av[1][i] == av[2][j] && !lookup[(int)av[2][j]])
				{
					lookup[(int)av[2][j]] = 1;
					ft_putchar(av[2][j]);
				}
				j++;
			}
			i++;
		}
	}
}
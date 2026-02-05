/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-jes <lude-jes@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 15:51:26 by lude-jes          #+#    #+#             */
/*   Updated: 2026/02/05 16:41:20 by lude-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	is_prime(int c)
{
	int i = 2;

	if (c < 2)
		return (0);
	while (i <= c / i)
	{
		if (c % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int main(int ac, char **av)
{
	long	n;
	long	i = 2;
	
	if (ac != 2)
	{
		printf("\n");
		return (1);
	}
	n = (long)atoi(av[1]);
	if (n == 1)
		printf("1\n");
	while (i <= n)
	{
		if (is_prime(i))
		{
			while (n % i == 0)
			{
				printf("%li", i);
				n /= i;
				if (n != 1)
					printf("*");
				else
					break ;
			}
		}
		i++;
	}
	printf("\n");
	return (0);
}
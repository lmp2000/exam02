/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-jes <lude-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 21:11:26 by lude-jes          #+#    #+#             */
/*   Updated: 2026/01/20 14:25:12 by lude-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int nbr)
{
    unsigned int nb;
    
    if (nbr < 0)
    {
        ft_putchar('-');
        nb = -nbr;
    }
    else
    	nb = nbr;
    if (nb >= 10)
        ft_putnbr(nb / 10);
    ft_putchar(nb % 10 + '0');
}

int	ft_atoi_v2(const char *str)
{
	int	i = 0;
	int	res = 0;
	int	s = 1;

	if (str[i] == '-')
	{
		s = -1;
		i++;
	}
	while (str[i])
	{
		res *= 10;
		res += str[i] - '0';
		i++;
	}
	return (res *= s);
}

int	ft_isprime(int n)
{
	int	i;

	i = 2;
	if (n < 2)
		return (0);
	while (i <= n / i)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int main(int ac, char **av)
{
    if (ac != 2 || ft_atoi(av[1]) <= 0)
    {
        write(1, "0\n", 2);
        return (0);
    }
    int n = ft_atoi_v2(av[1]);
    int sum = 0;
    while (n > 1)
    {
        if (ft_isprime(n))
            sum += n;
        n--;
    }
    ft_putnbr(sum);
    ft_putchar('\n');
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-jes <lude-jes@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 22:59:57 by lude-jes          #+#    #+#             */
/*   Updated: 2026/01/18 23:12:44 by lude-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "unistd.h"
#include "stdlib.h"

int	main(int argc, char **argv)
{
	int		a;
	int		b;
	int		result;
	char	sign;
	
	if (argc != 4)
	{
		write (1, "\n", 1);
		return (0);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	sign = argv[2][0];
	if (sign == '+')
		result = a + b;
	if (sign == '-')
		result = a - b;
	if (sign == '*')
		result = a * b;
	if (sign == '/')
		result = a / b;
	if (sign == '%')
		result = a % b;
	printf ("%i\n", result);
}
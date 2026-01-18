/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-jes <lude-jes@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 22:28:29 by lude-jes          #+#    #+#             */
/*   Updated: 2026/01/18 22:49:03 by lude-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	char	*ptr;

	if (argc != 2)
		return (0);
	ptr = argv[1];
	while (*ptr)
	{
		if (*ptr >= 'A' && *ptr <= 'Z')
		{
			write (1, "_", 1);
			*ptr += 32;
		}
		write (1, ptr++, 1);
	}
}
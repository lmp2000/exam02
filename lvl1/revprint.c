/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revprint.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-jes <lude-jes@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 15:38:51 by lude-jes          #+#    #+#             */
/*   Updated: 2026/01/04 16:24:35 by lude-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*ptr;
	
	if (argc == 2)
	{
		ptr = argv[1];
		while (*ptr)
			ptr++;
		while (--ptr != argv[1])
			write (1, ptr, 1);
		write (1, ptr, 1);
	}
	write (1, "\n", 1);
	return (0);
}
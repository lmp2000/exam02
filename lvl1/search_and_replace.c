/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-jes <lude-jes@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 17:22:05 by lude-jes          #+#    #+#             */
/*   Updated: 2026/01/04 17:43:37 by lude-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*ptr;

	ptr = argv[1];
	if (argc == 4 && !argv[2][1] && !argv[3][1])
	{
		while (*ptr)
		{
			if (*ptr == argv[2][0])
				write (1, &argv[3][0], 1);
			else
				write (1, ptr, 1);
			ptr++;
		}
	}
	write (1, "\n", 1);
}
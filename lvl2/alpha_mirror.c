/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-jes <lude-jes@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 21:45:35 by lude-jes          #+#    #+#             */
/*   Updated: 2026/01/18 22:20:52 by lude-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char	c;
	char	*ptr;
	
	if (argc != 2)
	{
		write (1, "\n", 1);
		return (0);
	}
	ptr = *(argv + 1); // = argv[1]
	while (*ptr)
	{
		if (*ptr >= 'a' && *ptr <= 'z')
			c = 'z' - *ptr + 'a';
		else if (*ptr >= 'A' && *ptr <= 'Z')
			c = 'Z' - *ptr + 'A';
		else
			c = *ptr;
		write (1, &c, 1);
		ptr++;
	}
	write (1, "\n", 1);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-jes <lude-jes@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 15:13:32 by lude-jes          #+#    #+#             */
/*   Updated: 2026/01/04 15:26:56 by lude-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char	c;
	char	*ptr;
	int		i;
	
	if (argc != 2)
	{
		write (1, "\n", 1);
		return (0);
	}
	ptr = argv[1];
	while (*ptr)
	{
		c = *ptr;
		i = 0;
		if (c >= 'A' && c <= 'Z')
			i = c - 'A';
		else if (c >= 'a' && c <= 'z')
			i = c - 'a';
		while (i >= 0)
		{
			write (1, &c, 1);
			i--;
		}
		ptr++;
	}
	write (1, "\n", 1);
	return (0);
}
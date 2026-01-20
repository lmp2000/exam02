/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-jes <lude-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 15:31:11 by lude-jes          #+#    #+#             */
/*   Updated: 2026/01/20 15:32:31 by lude-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	char	*ptr;
	int		space;

	if (ac != 2)
	{
		write (1, "\n", 1);
		return (0);
	}
	ptr = av[1];
	while (*ptr == 32 || (*ptr >= 9 && *ptr <= 13))
		ptr++;
	while (*ptr)
	{
		space = 0;
		while (*ptr == 32 || (*ptr >= 9 && *ptr <= 13))
		{
			ptr++;
			space++;
		}
		if (space && *ptr)
			write (1, "   ", 3);
		if (*ptr)
			write (1, ptr++, 1);
	}
	write (1, "\n", 1);
}
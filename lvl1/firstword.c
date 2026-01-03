/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   firstword.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-jes <lude-jes@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 19:24:23 by lude-jes          #+#    #+#             */
/*   Updated: 2026/01/03 20:30:14 by lude-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*ptr;
	
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	ptr = argv[1];
	while (*ptr == 9 || *ptr == 32)
		ptr++;
	while (*ptr && *ptr != 9 && *ptr != 32)
		write (1, ptr++, 1);
	write (1, "\n", 1);
	return (0);
}
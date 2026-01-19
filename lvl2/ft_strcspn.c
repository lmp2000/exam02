/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-jes <lude-jes@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 19:12:41 by lude-jes          #+#    #+#             */
/*   Updated: 2026/01/19 19:20:05 by lude-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int		check;
	int		j;
	size_t	i;

	i = 0;
	while (s[i])
	{
		check = 0;
		j = 0;
		while (reject[j])
		{
			if (s[i] == reject[j])
			{
				check = 1;
				break ;
			}
			j++;
		}
		if (check == 1)
			return (i);
		i++;
	}
	return (i);
}
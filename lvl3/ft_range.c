/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-jes <lude-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 17:48:07 by lude-jes          #+#    #+#             */
/*   Updated: 2026/01/20 18:22:30 by lude-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int start, int end)
{
	int		size;
	int		*ret;
	int		i;

	i = 0;
	size = end - start < 0 ? (end - start) * -1 + 1 : end - start + 1;
	ret = malloc(size * sizeof(int));
	if (!ret)
		return (NULL);
	while (i < size)
	{
		if (start < end)
			ret[i] = start + i;
		else
			ret[i] = start - i;
		i++;
	}
	return (ret);
}

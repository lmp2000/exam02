/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-jes <lude-jes@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 18:49:52 by lude-jes          #+#    #+#             */
/*   Updated: 2026/02/04 17:47:35 by lude-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t	count;
	char	*ptr;

	count = 0;
	while (*s)
	{
		ptr = (char *)accept;		// na pratica, a partir daqui ja nao tenho a proteção do compilador com o const char pointer
		while (*ptr)
		{
			if (*s == *ptr)
			{
				count++;
				break ;
			}
			ptr++;
		}
		if (!(*ptr))
			break ;
		s++;
	}
	return (count);
}

int main()
{
	char *a = "cab321";
	const char *b = "abc123";

	printf("%zu\n", ft_strspn(a, b));
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-jes <lude-jes@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 20:09:38 by lude-jes          #+#    #+#             */
/*   Updated: 2026/01/19 20:23:44 by lude-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char    *ft_strrev(char *str)
{
	char	*end;
	char	*start;
	char	temp;

	start = str;
	end = str;
	while (*end)
		end++;
	end--;
	while (start < end)
	{
		temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
	return (str);
}

int main()
{
	char *a = malloc(4);
	a[0] = 'a';
	a[1] = 'b';
	a[2] = 'c';
	a[3] = '\0';
	printf("%s\n", ft_strrev(a));
}
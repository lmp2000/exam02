/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-jes <lude-jes@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 18:37:28 by lude-jes          #+#    #+#             */
/*   Updated: 2026/02/04 23:06:31 by lude-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_space(char c)
{
	if (c == ' ' || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

int	count_words(char *str)
{
	int	count = 0;
	while (*str)
	{
		while (*str && is_space(*str))
			str++;
		if (*str)
			count++;
		while (*str && !is_space(*str))
			str++;
	}
	return (count);
}

int	strleng(char *s)
{
	int leng = 0;
	while (*s && !is_space(*s))
	{
		s++;
		leng++;
	}
	return (leng);
}

char	*extrat_word(char *s)
{
	char	*word;
	int	i = 0;
	int		leng = strleng(s);

	word = malloc(leng + 1);
	if (!word)
		return (NULL);
	while (i < leng)
	{
		word[i] = *s;
		i++;
		s++;
	}
	word[i] = '\0';
	return (word);
}

char    **ft_split(char *str)
{
	char	**ret;
	if (!str)
		return (NULL);
	int words = count_words(str);
	int i = 0;
	ret = malloc(sizeof(char *) * (words + 1));
	while (*str && i < words)
	{
		while (is_space(*str))
			str++;
		if (*str)
		{
			ret[i] = extrat_word(str);
			i++;
		}
		while (*str && !is_space(*str))
			str++;
	}
	ret[i] = NULL;
	return (ret);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-jes <lude-jes@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 23:31:52 by lude-jes          #+#    #+#             */
/*   Updated: 2026/01/19 00:00:36 by lude-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(int c)
{
	return ((c >= 9 && c <=13) || c == 32 ? 1 : 0);
}

int ft_isdigit(int c)
{
	return (c >= '0' || c <= '9' ? 1 : 0);
}

int	ft_atoi(const char *str)
{
	int	i = 0;
	int	res = 0;
	int	s = 1;

	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-')
	{
		s = -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		res *= 10;
		res += str[i] - '0';
		i++;
	}
	return (res *= s);
}
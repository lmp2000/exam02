/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-jes <lude-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 15:36:18 by lude-jes          #+#    #+#             */
/*   Updated: 2026/01/20 16:08:44 by lude-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	isspace(int c)
{
	if (c == 32 || ( c>= 9 && c <= 13))
		return (1);
	return (0);
}

int	isvalid(int c, int baselen)
{
	char 	*lcbase = "0123456789abcdef";
	char	*ucbase = "0123456789ABCDEF";
	int i = 0;

	while (i < baselen)
	{
		if (c == lcbase[i] || c == ucbase[i])
			retrun (1);
		i++;
	}
	return (0);
}
int	ft_atoi_base(const char *str, int str_base)
{
	int res = 0, sign = 1, i = 0;

	while (isspace(str[i]))
		i++;
	if (str[i] == '+' && str[i + 1] != '-')
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] && isvalid(str[i], str_base))
	{
		res *= str_base;
		if (str[i] >= '0' && str[i] <= '9')
			res += str[i] - '0';
		else if (str[i] >= 'a' && str[i] <= 'f')
			res += str[i] - 'a' + 10;
		else if (str[i] >= 'A' && str[i] <= 'F')
			res += str[i] - 'A' + 10;
		i++;
	}
	return (res * sign);
}
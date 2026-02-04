/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-jes <lude-jes@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 18:03:04 by lude-jes          #+#    #+#             */
/*   Updated: 2026/02/04 18:08:59 by lude-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void print_bits(unsigned char octet)
{
	int i = 8;
	unsigned char bit = 0;

	while (i--)
	{
		bit = (octet >> i & 1) + 48;
		write (1, &bit, 1);
	}
}
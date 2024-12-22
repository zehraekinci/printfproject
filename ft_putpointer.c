/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeekinci <zeekinci@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 14:37:46 by zeekinci          #+#    #+#             */
/*   Updated: 2024/12/01 14:18:49 by zeekinci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

int	ft_putpointer(unsigned long ul)
{
	int	esc;

	esc = 0;
	if (ul == 0)
	{
		esc += write(1, "(nil)", 5);
		return (esc);
	}
	esc += write(1, "0x", 2);
	if (ul >= 16)
		esc += ft_putpointer(ul / 16);
	esc += write(1, &"0123456789abcdef"[ul % 16], 1);
	return (esc);
}
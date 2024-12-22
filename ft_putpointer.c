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
#include <stdio.h>
#include "ft_printf.h"

int	ft_putpointer(unsigned long ul)
{
	int	esc;
	int	check;

	check = 0;
	esc = 0;
	if(ul== 0)
	{
		esc += write(1, "(nil)", 5);
		return esc;
	}
	else if (ul < 16)
		esc += write (1, "0x", 2);
	if (esc == -1)
		return (-1);
	if (ul >= 16)
	{
		check = ft_putpointer(ul / 16);
		if (check == -1)
			return (-1);
		esc += check;
		check = write(1, &"0123456789abcdef"[ul % 16], 1);
		if (check == -1)
			return (-1);
		return (++esc);
	}
	check = write(1, &"0123456789abcdef"[ul % 16], 1);
	if (check == -1)
		return (-1);
	return (++esc);
}




/*

int	ft_putpointer(void *ptr)
{
	unsigned long	ul;
	unsigned long	esc;
	unsigned long	check;

	ul = (unsigned long) ptr; 
	check = 0;
	esc = 0;
	if (ul < 16)
		esc += write (1, "0x", 2);
	if (esc == -1)
		return (-1);
	if (ul >= 16)
	{
		check = ft_putpointer((void *)(ul / 16));
		if (check == -1)
			return (-1);
		esc += check;
		check = write(1, &"0123456789abcdef"[ul % 16], 1);
		if (check == -1)
			return (-1);
		return (++esc);
	}
	check = write(1, &"0123456789abcdef"[ul % 16], 1);
	if (check == -1)
		return (-1);
	return (++esc);
}
*/

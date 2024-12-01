/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexad.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeekinci <zeekinci@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 13:11:03 by zeekinci          #+#    #+#             */
/*   Updated: 2024/12/01 14:14:47 by zeekinci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexad(unsigned int hex, int to)
{
	int	esc;
	int	check;

	check = 0;
	esc = 0;
	if (hex >= 16)
		esc += ft_puthexad(hex / 16, to);
	if (esc == -1)
		return (-1);
	if (to == 'x')
		check = write (1, &"0123456789abcdef"[hex % 16], 1);
	else if (to == 'X')
		check = write (1, &"0123456789ABCDEF"[hex % 16], 1);
	if (check == -1)
		return (-1);
	return (++esc);
}

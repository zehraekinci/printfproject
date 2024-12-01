/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeekinci <zeekinci@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 13:11:34 by zeekinci          #+#    #+#             */
/*   Updated: 2024/12/01 14:13:12 by zeekinci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

void	ft_putdint(int dec)
{
	char	*base;

	base = "0123456789";
	if (dec == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (dec < 0)
	{
		write(1, "-", 1);
		dec = -dec;
	}
	if (dec > 9)
	{
		ft_putdint(dec / 10);
		ft_putdint(dec % 10);
	}
	else
		write(1, &base[dec], 1);
}

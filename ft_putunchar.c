/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunchar.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeekinci <zeekinci@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 13:09:03 by zeekinci          #+#    #+#             */
/*   Updated: 2024/12/01 14:24:14 by zeekinci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

int	ft_putunchar(unsigned int dec)
{
	char	*base;
	int		len;

	base = "0123456789";
	len = 0;
	if (dec == -2147483648)
	{
		write(1, "2147483648", 11);
		return (11);
	}
	if (dec < 0)
	{
		write(1, "-", 1);
		len += 1;
		dec = -dec;
	}
	if (dec > 9)
	{
		len += ft_putunchar(dec / 10);
		len += ft_putunchar(dec % 10);
	}
	else
	{
		write(1, &base[dec], 1);
		len += 1;
	}
	return (len);
}
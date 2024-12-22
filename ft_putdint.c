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

int	ft_putdint(int dec)
{
	char	*base;
	int		len;

	base = "0123456789";
	len = 0;
	if (dec == -2147483648)
	{
		write(1, "-2147483648", 11);
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
		len += ft_putdint(dec / 10);
	}
	write(1, &base[dec % 10], 1);
	len += 1;
	return (len);
}

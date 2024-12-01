/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstring.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeekinci <zeekinci@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 14:35:08 by zeekinci          #+#    #+#             */
/*   Updated: 2024/12/01 14:21:21 by zeekinci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstring(char	*string)
{
	while (string)
	{
		write(1, &string, 1);
		string++;
	}
}

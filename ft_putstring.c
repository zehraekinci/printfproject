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

int	ft_putstring(char	*string)
{
	if (string == NULL) 
    {
        write(1, "(null)", 6);  // NULL yerine "(null)" yazdır
        return 6;  // "(null)" yazdırıldığında 6 karakter yazdırıldı
    }

    if (*string == '\0')  // Eğer string boşsa, hiçbir şey yazdırma
    {
        return 0;  // Boş string olduğu için hiçbir şey yazdırılmadı
    }

    int len = 0;
    while (*string)  // Stringin sonuna kadar gidip yazdırma
    {
        write(1, string, 1);  // Stringin her bir karakterini yazdır
        string++;
        len++;  // Yazdırılan karakter sayısını artır
    }

    return len;  // Yazdı
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeekinci <zeekinci@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 13:01:25 by zeekinci          #+#    #+#             */
/*   Updated: 2024/12/01 13:33:35 by zeekinci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

void ft_printf(const char *format, ...) 
{
    va_list args;
    va_start(args, format);
    const char *ptr = format;
    
    while (*ptr != '\0') 
    {
        if (*ptr == '%') 
        {  
            ptr++;
            if (*ptr == 'd' || *ptr == 'i') 
            { 
                int i = va_arg(args, int); 
                ft_putdint(i); 
            }
            else if (*ptr == 's') 
            {  
                char *str = va_arg(args, char*); 
                ft_putstring(str);
             
            }
            else if (*ptr == 'c') 
            { 
                char c = va_arg(args, int);
                ft_putchar(c);
            }
             else if (*ptr == 'u') 
             { 
                long int a = va_arg(args, int);
                ft_putunchar(a);
             }
             else if (*ptr == 'x' || *ptr == 'X')
             {
                unsigned int e = va_arg(args, unsigned int);
                ft_puthexad(e, *ptr);
             }
             else if (*ptr == 'p')
             {
                void *e = va_arg(args, void*);
                ft_putpointer(e);
             }
            else {
                int c = va_arg(args, int);
                ft_putchar(c);
            }
        }
        else
            ft_putchar(*ptr);
        ptr++;
    }

    va_end(args);
}
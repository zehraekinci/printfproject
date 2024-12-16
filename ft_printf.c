/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeekinci <zeekinci@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 13:01:25 by zeekinci          #+#    #+#             */
/*   Updated: 2024/12/01 14:00:15 by zeekinci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_flag_catch(va_list args, char specifier)
{
    if (specifier == 'd' || specifier == 'i') 
    { 
        int i = va_arg(args, int); 
        ft_putdint(i); // ft_putdint fonksiyonu tanımlanmalı
    }
    else if (specifier == 's') 
    {  
        char *str = va_arg(args, char *); 
        ft_putstring(str); // ft_putstring fonksiyonu tanımlanmalı
    }
    else if (specifier == 'c') 
    { 
        char c = (char)va_arg(args, int);
        ft_putchar(c);
    }
    else if (specifier == 'u') 
    { 
        unsigned int a = va_arg(args, unsigned int);
        ft_putunchar(a); // ft_putunchar fonksiyonu tanımlanmalı
    }
    else if (specifier == 'x' || specifier == 'X')
    {
        unsigned int e = va_arg(args, unsigned int);
        ft_puthexad(e, specifier); // ft_puthexad fonksiyonu tanımlanmalı
    }
    else if (specifier == 'p')
    {
        void *e = va_arg(args, void*);
        ft_putpointer(e); // ft_putpointer fonksiyonu tanımlanmalı
    }
    else {
        ft_putchar('%');
        ft_putchar(specifier);
    }
    return 1;
}

// ft_printf fonksiyonu
int ft_printf(const char *format, ...) 
{
    va_list args;
    va_start(args, format);
    const char *ptr = format;
    int len = 0;

    while (*ptr != '\0') 
    {
        if (*ptr == '%') 
        {  
            ptr++;
            len += ft_flag_catch(args, *ptr); // Format işlemi
        }
        else
        {
            len += write(1, ptr, 1); // Normal karakteri yazdır
        }
        ptr++;
    }

    va_end(args);
    return len; // Yazdırılan toplam karakter sayısı
}

/*int ft_printf(const char *format, ...) 
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
                return (ft_putchar((char)(va_arg(args, int))));
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
    return 1;
}*/
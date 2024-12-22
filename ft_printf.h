/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libprintf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeekinci <zeekinci@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 13:10:17 by zeekinci          #+#    #+#             */
/*   Updated: 2024/12/01 14:26:51 by zeekinci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBPRINTF_H 
# define LIBPRINTF_H
# include <unistd.h>
# include <stdarg.h>


int ft_flag_catch(va_list args, char specifier);
int	ft_printf(const char *format, ...);
int	ft_putchar(char c);
int	ft_putdint(int dec);
int	ft_puthexad(unsigned int hex, int to);
int	ft_putpointer(unsigned long ul);
int	ft_putstring(char	*string);
int	ft_putunchar(unsigned int dec);

#endif

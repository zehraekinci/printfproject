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

void	ft_printf(const char *format, ...);
void	ft_putchar(char c);
void	ft_putdint(int dec);
int	ft_puthexad(unsigned int hex, int to);
int	ft_putpointer(void *ptr);
void	ft_putstring(char *str);
void	ft_putunchar(unsigned int dec);

#endif

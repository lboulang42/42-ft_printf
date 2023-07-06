/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboulang <lboulang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 18:53:35 by lboulang          #+#    #+#             */
/*   Updated: 2022/12/13 04:29:34 by lboulang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

size_t	ft_strlen(const char *s);
int		ft_parse(va_list va_ptr, const char flag, int tmp, int counter);
int		ft_printf(const char *arg0, ...);
int		ft_nbr(long long int nbr, char *base, int count);
int		ft_print_ptr(unsigned long long ptr);
int		ft_putchar(char c);
int		ft_putstr(char *s);

#endif
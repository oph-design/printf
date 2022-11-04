/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oheinzel <oheinzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 14:11:34 by oheinzel          #+#    #+#             */
/*   Updated: 2022/11/02 15:02:42 by oheinzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

//external
# include "libft.h"
# include <unistd.h>
# include <stdarg.h>

//functions
size_t	ft_printx(unsigned int x, char caps);
int		ft_printf(const char *s, ...);
size_t	ft_printp(unsigned long long x);
size_t	ft_putchar(char c);
size_t	ft_putstr(char *s);
size_t	ft_putnbr(int x);
size_t	ft_putunbr(unsigned int x);

#endif

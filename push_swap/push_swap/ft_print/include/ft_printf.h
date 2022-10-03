/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahsay <hkahsay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 16:26:16 by hkahsay           #+#    #+#             */
/*   Updated: 2022/01/03 16:36:48 by hkahsay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(const char *str, ...);
int		ft_printchar(int c);
int		ft_formats(va_list args, const char format);
void	ft_putstr(char *str);
int		ft_printstr(char *str);
int		ft_printnbr(int n);
int		ft_printpercent(void);
int		ft_print_ptr(unsigned long long ptr);
int		ft_ptr_len(uintptr_t num);
void	ft_put_ptr(uintptr_t num);
void	ft_put_hex(unsigned int num, const char format);
int		ft_len_hex(unsigned int num);
int		ft_print_hex(unsigned int num, const char format);
int		ft_print_unsigned(unsigned int n);
char	*ft_unsigned_itoa(unsigned int n);
int		ft_num_len(unsigned int num);
#endif
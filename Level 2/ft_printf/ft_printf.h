/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralfredi <ralfredi@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 17:17:54 by ralfredi          #+#    #+#             */
/*   Updated: 2021/11/16 15:00:31 by ralfredi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>

int		ft_printf(const char *format, ...);
int		print_flag(va_list args, int flag);
int		print_char(char c);
int		print_str(char *str);
int		print_pointer(unsigned long long pointer);
int		print_int(int n);
int		print_unsigned_int(unsigned int uns_int);
int		print_hex(unsigned int h, int flag);
char	*get_unsigned_long_long_hex(unsigned long long n);
char	*ft_uitoa(unsigned int n);
void	str_toupper(char *str);
char	*get_hex(unsigned int n);
void	ft_putchar_fd(char c, int fd);
char	*ft_strdup(const char *s);
char	*ft_itoa(int n);
void	ft_putstr_fd(char *s, int fd);
int		ft_strlen(const char *s);
int		ft_toupper(int c);

#endif //FT_PRINTF_H

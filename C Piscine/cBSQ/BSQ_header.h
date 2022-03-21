/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BSQ_header.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralfredi <ralfredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 15:12:48 by ralfredi          #+#    #+#             */
/*   Updated: 2021/09/22 23:40:19 by ralfredi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_HEADER_H
# define BSQ_HEADER_H

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_sqr {
	int		x;
	int		y;
	int		size;
}			t_sqr;

typedef struct s_val {
	int		hight;
	int		length;
}			t_val;

char	*ft_strdup(char *src);
void	ft_putstr(char *str, int out);
int		ft_strlen(char *str);
int		ft_isspace_or_null(char c);
int		getnum(char c);
char	*ft_strntail(char *str, int n);
char	*ft_strncpy(char *str, int n);
int		ft_atoi(char *str);
int		ft_nbrlen(int nbr);
int		is_valide(char *fname, char ***map, char **legend, int *hight);
void	print_array(char **map, int hight);
int		get_legend(int f_dis, char **legend);
void	free_char_array(char **map, t_val *val);
void	free_int_array(int **map_int, char *legend, int hight);
void	finde_sqr(char *fname);
int		min_triple(int a, int b, int c);
int		sum_of_squares(int a, int b);
int		**create_matrix(char **map, int **map_int, t_val val, char empty);
void	manipulation(int **map_int, t_val val, t_sqr *sqr);
void	print_sqr(char **map, char *legend, t_sqr sqr);//, int hight);

#endif //BSQ_HEADER_H

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02_header.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlothair <mlothair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 14:05:05 by ralfredi          #+#    #+#             */
/*   Updated: 2021/09/19 20:42:54 by mlothair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_HEADER_H
# define RUSH02_HEADER_H

# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>

# define NUM arr
# define NUM_NAME names
# define THOUSAND big_names
# define SIZE 29

int		main(int argc, char *argv[]);
int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);
void	ft_putstr(char *str);
int		check_arguments(void);
char	*ft_strncpy(char *str, int n);
int		read_dic(char *dict_name, int *NUM, char **NUM_NAME[],
			char **THOUSAND[]);
char	*ft_strntail(char *str, int n);
char	*ft_strncat(char *dest, char *src, unsigned int nb);
char	*ft_strcat(char *dest, char *src);

int		ft_atoi(char *str);
int		count_lines(char *name);
int		split_names_nums(char **names, int nums[1000], char **big_names);
int		ft_strlen1(char *str);
char	**ft_split(char *str, char splitter);
void	sort_by_first_num(char **lines);
char	*remove_double_spaces(char *str);
int		read_dict(char *dict_name, char ***names,
			char ***big_names, int arr[1000]);

#endif //RUSH02_HEADER_H

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_flag.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralfredi <ralfredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 22:36:18 by ralfredi          #+#    #+#             */
/*   Updated: 2021/09/15 00:16:19 by ralfredi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);
int	num_lenth(int n);
int	ft_atoi(char *str);

int	check_c(char *flag)
{
	int	count;

	if (flag[0] == '-' && flag[1] == 'c')
	{
		if (flag[2] == '\0')
			return (-1);
		else
		{
			count = ft_atoi(flag + 2);
			if (ft_strlen(flag + 2) != num_lenth(count))
				return (-2);
			else
				return (count);
		}
	}
	else
		return (-2);
}

int	check_flag(char *flag, int type)
{
	int	count;

	if (1 == type)
		return (check_c(flag));
	else
	{
		count = ft_atoi(flag);
		if (ft_strlen(flag) != num_lenth(count))
			return (-2);
		else
			return (count);
	}
}

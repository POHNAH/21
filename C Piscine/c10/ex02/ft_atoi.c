/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralfredi <ralfredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 17:12:38 by ralfredi          #+#    #+#             */
/*   Updated: 2021/09/15 00:14:11 by ralfredi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*check_string(char *s, int *negative)
{
	int	i;

	i = 0;
	*negative = 1;
	while (s[i] != '\0' && (s[i] == ' ' || s[i] == '\t' || s[i] == '\n'
			|| s[i] == '\v' || s[i] == '\f' || s[i] == '\r'))
		++i;
	while (s[i] != '\0' && (s[i] == '-' || s[i] == '+'))
	{
		if (s[i] == '-')
			*negative *= -1;
		++i;
	}
	return (s + i);
}

int	ft_atoi(char *str)
{
	int		i;
	int		result;
	int		negative;
	char	*str_number;

	str_number = check_string(str, &negative);
	i = 0;
	result = 0;
	while (str_number[i] != '\0')
	{
		if (str_number[i] >= '0' && str_number[i] <= '9')
		{
			if (negative < 0)
				result = result * 10 - (str_number[i] - '0');
			else
				result = result * 10 + (str_number[i] - '0');
			++i;
		}
		else
			return (result);
	}
	return (result);
}

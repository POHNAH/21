/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralfredi <ralfredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 17:12:38 by ralfredi          #+#    #+#             */
/*   Updated: 2021/11/04 14:15:56 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static char	*check_string(const char *s, int *negative)
{
	int	i;

	i = 0;
	while (s[i] != '\0' && (s[i] == ' ' || s[i] == '\t' || s[i] == '\n'
			|| s[i] == '\v' || s[i] == '\f' || s[i] == '\r'))
		++i;
	*negative = 1;
	if (s[i] == '-')
		*negative = -1;
	if (s[i] == '-' || s[i] == '+')
		++i;
	return ((char *)(s + i));
}

int	ft_atoi(const char *str)
{
	int				i;
	long long int	result;
	int				negative;
	char			*str_number;
	int				figure;

	str_number = check_string(str, &negative);
	i = 0;
	result = 0;
	while (str_number[i] >= '0' && str_number[i] <= '9')
	{
		figure = (str_number[i] - '0');
		if (negative == -1 && (result >= 922337203685477581
				|| (result >= 922337203685477580 && figure > 8)))
			return (0);
		if (negative == 1 && (result >= 922337203685477581
				|| (result >= 922337203685477580 && figure > 7)))
			return (-1);
		result = result * 10 + negative * figure;
		++i;
	}
	return (result);
}

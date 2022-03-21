/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralfredi <ralfredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 19:40:33 by ralfredi          #+#    #+#             */
/*   Updated: 2021/09/07 20:26:43 by ralfredi         ###   ########.fr       */
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

int	check_double(char *base, char c)
{
	int	index;

	index = 0;
	while (base[index] != '\0')
	{
		if (base[index] == c)
			return (index);
		else
			++index;
	}
	return (-1);
}

int	check_base(char *str)
{
	char	s[300];
	int		base;

	base = 0;
	s[base] = '\0';
	while (str[base] != '\0')
	{
		if (str[base] == '+' || str[base] == '-')
			return (0);
		else if (check_double(s, str[base]) == -1)
		{
			s[base] = str[base];
			s[base + 1] = '\0';
		}
		else
			return (0);
		++base;
	}
	if (base != 0)
		return (base);
	else
		return (0);
}

int	convert(char *str, char *base, int negative, int b)
{
	int		i;
	int		result;
	int		number;

	i = 0;
	result = 0;
	while (str[i] != '\0')
	{
		number = check_double(base, str[i]);
		if (number != -1)
		{
			if (negative < 0)
				result = result * b - number;
			else
				result = result * b + number;
			++i;
		}
		else
			return (result);
	}
	return (result);
}

int	ft_atoi_base(char *str, char *base)
{
	int		negative;
	int		b;
	char	*str_number;

	b = check_base(base);
	if (b > 1)
	{
		str_number = check_string(str, &negative);
		return (convert(str_number, base, negative, b));
	}
	else
		return (0);
}

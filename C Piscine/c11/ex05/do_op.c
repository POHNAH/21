/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralfredi <ralfredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 22:30:53 by ralfredi          #+#    #+#             */
/*   Updated: 2021/09/15 23:35:48 by ralfredi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2);
void	ft_putnbr(int nb);
int		ft_atoi(char *str);
void	ft_putstr(char *str);

int	check_op(char *op)
{
	if (0 == ft_strcmp(op, "-"))
		return (0);
	else if (0 == ft_strcmp(op, "+"))
		return (1);
	else if (0 == ft_strcmp(op, "*"))
		return (2);
	else if (0 == ft_strcmp(op, "/"))
		return (3);
	else if (0 == ft_strcmp(op, "%"))
		return (4);
	else
		return (-1);
}

void	its_ok(int var1, int op, int var2)
{
	if (-1 == op)
		ft_putnbr(0);
	else if (0 == op)
		ft_putnbr(var1 - var2);
	else if (1 == op)
		ft_putnbr(var1 + var2);
	else if (2 == op)
		ft_putnbr(var1 * var2);
	else if (3 == op)
	{
		if (0 == var2)
			ft_putstr("Stop : division by zero");
		else
			ft_putnbr(var1 / var2);
	}
	else if (4 == op)
	{
		if (0 == var2)
			ft_putstr("Stop : modulo by zero");
		else
			ft_putnbr(var1 % var2);
	}
}

int	main(int argc, char *argv[])
{
	if (4 == argc)
		its_ok(ft_atoi(argv[1]), check_op(argv[2]), ft_atoi(argv[3]));
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarbosa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 16:53:30 by lbarbosa          #+#    #+#             */
/*   Updated: 2019/12/07 10:21:19 by lbarbosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putchar2(void)
{
	write(1, &", ", 2);
}

void	ft_print_comb2(void)
{
	int num1;
	int num2;

	num1 = 0;
	while (num1 <= 98)
	{
		num2 = num1 + 1;
		while (num2 <= 99)
		{
			ft_putchar((num1 / 10) + 48);
			ft_putchar((num1 % 10) + 48);
			ft_putchar(' ');
			ft_putchar((num2 / 10) + 48);
			ft_putchar((num2 % 10) + 48);
			if (num1 != 98)
			{
				ft_putchar2();
			}
			num2++;
		}
		num1++;
	}
}

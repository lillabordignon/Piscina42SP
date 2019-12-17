/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarbosa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 15:20:06 by lbarbosa          #+#    #+#             */
/*   Updated: 2019/12/07 09:32:16 by lbarbosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c, char d, char e)
{
	write(1, &c, 1);
	write(1, &d, 1);
	write(1, &e, 1);
}

void	ft_putchar2(void)
{
	write(1, &", ", 2);
}

void	ft_print_comb(void)
{
	int centena;
	int dezena;
	int unidade;

	centena = 0;
	while (centena <= 7)
	{
		dezena = centena + 1;
		while (dezena <= 8)
		{
			unidade = dezena + 1;
			while (unidade <= 9)
			{
				ft_putchar(centena + '0', dezena + '0', unidade + '0');
				if (centena != 7)
				{
					ft_putchar2();
				}
				unidade++;
			}
			dezena++;
		}
		centena++;
	}
}

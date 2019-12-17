/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarbosa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 19:43:30 by lbarbosa          #+#    #+#             */
/*   Updated: 2019/12/12 14:45:34 by lbarbosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int		main(void)
{
	int num1;
	int num2;

	num1 = 8;
	num2 = 4;

	ft_ultimate_div_mod(&num1, &num2);
	printf("%d %d", num1, num2);
}

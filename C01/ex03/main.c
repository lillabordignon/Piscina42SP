/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarbosa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 15:47:50 by lbarbosa          #+#    #+#             */
/*   Updated: 2019/12/11 20:00:03 by lbarbosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod);

int main()
{
	int x = 4;
	int y = 2;
	int div;
	int mod;

	div = x / y;
	mod = x % y;

	printf("%d\n", div);
	printf("%d\n", mod);
	return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarbosa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/12 15:56:41 by lbarbosa          #+#    #+#             */
/*   Updated: 2019/12/12 16:20:25 by lbarbosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_rev_int_tab(int *tab, int size);

int main(void)
{
	int teste;
	int *tab;
	int size;
	int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	tab = array;
	size = 9;
	teste = 0;

	while(teste <= size - 1)
	{
		printf("%d", tab[teste]);
		teste++;
	}

	ft_rev_int_tab(tab, size);

	teste = 0;
	printf("\n");

	while(teste <= size - 1)
	{
		printf("%d", tab[teste]);
		teste++;
	}

	return(0);
}

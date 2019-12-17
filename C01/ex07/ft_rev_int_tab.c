/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarbosa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/12 15:57:08 by lbarbosa          #+#    #+#             */
/*   Updated: 2019/12/12 16:22:47 by lbarbosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int x;
	int i;
	int a;

	i = 0;
	a = size - 1;
	while (i < size / 2)
	{
		x = tab[a];
		tab[a] = tab[i];
		tab[i] = x;
		i++;
		a--;
	}
}

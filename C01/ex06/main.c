/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarbosa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/12 15:29:13 by lbarbosa          #+#    #+#             */
/*   Updated: 2019/12/12 15:54:59 by lbarbosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	display(char c)
{
	write(1, &c, 1);
}

void	mtonun(int i)
	{
		if ( i >= 10)
		{
			mtonun(i /10);
		}
		display(i % 10 + '0');
	}

int	ft_strlen(char *str);

int	main(void)
{
	int ii;
	char *str;
	str = "lilla";
	ii = ft_strlen(str);
	mtonun(ii);
	return(0);
}

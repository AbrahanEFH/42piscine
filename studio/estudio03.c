/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   estudio03.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afrias <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 11:09:29 by afrias            #+#    #+#             */
/*   Updated: 2023/06/19 12:00:09 by afrias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

int	main()
{
	int	a;
	int	b;
	int	x;
	int y;

	a = 8;
	b = 4;
	ft_div_mod(a, b, &x, &y);
	printf("%d | %d", x, y);
}

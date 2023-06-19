/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   estudio04.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afrias <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 11:29:31 by afrias            #+#    #+#             */
/*   Updated: 2023/06/19 11:43:49 by afrias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div	= *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

int	main()
{
	int	x;
	int	y;

	x = 20;
	y = 8;
	ft_ultimate_div_mod(&x, &y);
	printf("%d | %d", x, y);
}

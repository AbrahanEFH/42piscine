/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puntero2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afrias <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 10:38:18 by afrias            #+#    #+#             */
/*   Updated: 2023/06/15 12:24:48 by afrias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int idd;

	idd = *a;
	*a = *b;
	*b = idd;
}

int	main()
{
	int x;
	int y;

	x = 4;
	y = 2;
	
	ft_swap(&x, &y);
	printf("%d \n", x);
	printf("%d", y);
}
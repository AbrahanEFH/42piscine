/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puntero.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afrias <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 09:58:16 by afrias            #+#    #+#             */
/*   Updated: 2023/06/15 10:37:09 by afrias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int	main()
{
	int *nbr;
	int number;

	nbr = &number;
	ft_ft(nbr);
	printf("%d", number);
}

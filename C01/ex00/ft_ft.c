/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afrias <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 10:21:11 by afrias            #+#    #+#             */
/*   Updated: 2023/06/18 10:32:53 by afrias           ###   ########.fr       */
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
	return (0);
}

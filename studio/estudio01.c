/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   estudio01.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afrias <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 08:42:50 by afrias            #+#    #+#             */
/*   Updated: 2023/06/19 09:20:40 by afrias           ###   ########.fr       */
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
	int num;

	nbr = &num;
	ft_ft(nbr);
	printf("%d", num);

}

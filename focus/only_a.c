/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   only_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afrias <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 10:39:08 by afrias            #+#    #+#             */
/*   Updated: 2023/06/21 10:43:32 by afrias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : only_a
Expected files   : only_a.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that displays a 'a' character on the standard output.
*/

#include <unistd.h>

int	main(void)
{
	write(1, "a", 1);
	return (0);
}

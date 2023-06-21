/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afrias <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 19:33:43 by afrias            #+#    #+#             */
/*   Updated: 2023/06/21 19:45:10 by afrias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : aff_last_param
Expected files   : aff_last_param.c
Allowed functions: write
--------------------------------------------------------------------------------
Write a program that takes strings as arguments, and displays its last
argument followed by a newline.
If the number of arguments is less than 1, the program displays a newline.
Examples:
$> ./aff_last_param "zaz" "mange" "des" "chats" | cat -e
chats$
$> ./aff_last_param "j'aime le savon" | cat -e
j'aime le savon$
$> ./aff_last_param
$
*/

#include <unistd.h>

int	main(int ac, chr **av)
{
	if (ac > 1)
	{
		while (*av[ac - 1])
			write(1, av[ac - 1]++, 1);
	}
	write (1, "\n", 1);
	return (0);
}

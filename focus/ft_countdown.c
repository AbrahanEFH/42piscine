/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdown.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afrias <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 10:44:14 by afrias            #+#    #+#             */
/*   Updated: 2023/06/21 10:49:00 by afrias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
 *
Assignment name  : ft_countdown
Expected files   : ft_countdown.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that displays all digits in descending order, followed by a
newline.

Example:
$> ./ft_countdown | cat -e
9876543210$
$>
*/

#include <unistd.h>

int	main(void)
{
	char num;

	num = '9';
	while (num >= '0')
	{
		write(1, &num, 1);
		num--;
	}
	return (0);
}

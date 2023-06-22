/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afrias <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 13:14:38 by afrias            #+#    #+#             */
/*   Updated: 2023/06/22 13:20:56 by afrias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
 * Assignment name  : rev_print
Expected files   : rev_print.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a function that takes a string and displays the string in reverse
order followed by the newline.
Its prototype is constructed like this :
  char *ft_rev_print (char *str)
It must return its argument

Examples:

$> ./rev_print "zaz" | cat -e
zaz$
$> ./rev_print "dub0 a POIL" | cat -e
LIOP a 0bud$
$> ./rev_print | cat -e
$
*/

#include <unistd.h>

char	*ft_rev_print(char *str)
{
	int len;

	len = 0;
	char *ptr = str;
	while (*ptr)
	{
		len++;
		ptr++;
	}
	while (len > 0)
	{
		len--;
		write(1, &str[len], 1);
	}
	write(1, "\n", 1);
	return (str);
}

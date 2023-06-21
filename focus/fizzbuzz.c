/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afrias <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 13:07:32 by afrias            #+#    #+#             */
/*   Updated: 2023/06/21 13:18:09 by afrias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Assignment name  : fizzbuzz
Expected files   : fizzbuzz.c
Allowed functions: write
--------------------------------------------------------------------------------

Ecrire un programme qui écrit une suite de nombres de 1 à 100 sur la sortie
standard, tous séparés par une newline.

Si le nombre est un multiple de 3, le programme doit écrire 'fizz' à la place.

Si le nombre est un multiple de 5, le programme doit écrire 'buzz' à la place.

Si le nombre est un multiple de 3 et un multiple de 5, le programme doit écrire
'fizzbuzz' à la place.

Exemple:
*/

#include <unistd.h>

void	ft_write_number(int number)
{
	if (number > 9)
		ft_write_number(number / 10);
	write(1, &"0123456789"[number % 10], 1);
}

int	main(void)
{
	int	number;

	number = 1;
	while (number <= 100)
	{
		if (number % 3 == 0 && number % 5 == 0)
			write(1, "fizzbuzz", 8);
		else if (number % 3 == 0)
			write(1, "fizz", 4);
		else if (number % 5 == 0)
			write(1, "buzz", 4);
		else
			ft_write_number(number);
		write(1, "\n", 1);
		number++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   estudio0.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afrias <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 08:21:55 by afrias            #+#    #+#             */
/*   Updated: 2023/06/19 08:37:33 by afrias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_com(void)
{
	int	a;
	int	b;
	int	c;

	a = '0';
		while (a <= '7')
		{
			b = a + 1;
			while (b <= '8')
			{
				c = b +1;
			while (c <= '9')
			{
				write(1, &a, 1);
				write(1, &b, 1);
				write(1, &c, 1);
				if (a != 7)
					write (1, ", ", 2);
				c++;
			}
			b++;
			}
			a++;
		}

}

int	main()
{
	ft_print_com();
	return (0);
}

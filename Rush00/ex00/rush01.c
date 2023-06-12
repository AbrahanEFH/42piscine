/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtamayo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 13:56:36 by dtamayo-          #+#    #+#             */
/*   Updated: 2023/06/03 17:23:08 by dtamayo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print(int x, char cl, char ml, char fl)
{
	int	ix;

	ix = 1;
	while (ix <= x)
	{
		if (ix == 1)
			ft_putchar(cl);
		else if (ix == x)
			ft_putchar(fl);
		else
			ft_putchar(ml);
		ix++;
	}
	ft_putchar('\n');
	return ;
}

void	rush(int x, int y)
{
	int		iy;

	if (x != 0 && y != 0)
	{
		iy = 1;
		while (iy <= y)
		{
			if (iy == 1)
				ft_print(x, '/', '*', '\\');
			else if (iy == y)
				ft_print(x, '\\', '*', '/');
			else
				ft_print(x, '*', ' ', '*');
			iy++;
		}
	}
	return ;
}

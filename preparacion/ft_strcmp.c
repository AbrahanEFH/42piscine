/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afrias <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 09:14:27 by afrias            #+#    #+#             */
/*   Updated: 2023/06/22 09:55:51 by afrias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Assignment name  : ft_strcmp
Expected files   : ft_strcmp.c
Allowed functions:
--------------------------------------------------------------------------------

Reproduce the behavior of the function strcmp (man strcmp).

Your function must be declared as follows:

int    ft_strcmp(char *s1, char *s2);
*/

int	ft_strcmp(char *s1, char *s2)
{
	while (+s1++ == *s2++)
		if (!*s1++ && !*s2)
			return (0);
	return (*--s1 - *--2);
}

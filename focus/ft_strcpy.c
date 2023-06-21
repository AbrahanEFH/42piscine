/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afrias <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 16:12:06 by afrias            #+#    #+#             */
/*   Updated: 2023/06/21 16:25:56 by afrias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Assignment name  : ft_strcpy
Expected files   : ft_strcpy.c
Allowed functions:
--------------------------------------------------------------------------------

Reproduce the behavior of the function strcpy (man strcpy).

Your function must be declared as follows:

char    *ft_strcpy(char *s1, char *s2);
*/

#include <unistd.h>

char	*ft_strcpy(char *s1, char *2)
{
	int i;

	i = 0;
	while (s2[i] != '\0')
	{
		s1[i] != s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

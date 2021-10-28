/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: pniezen <pniezen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/19 16:34:59 by pniezen       #+#    #+#                 */
/*   Updated: 2021/10/27 17:37:06 by pniezen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n > 0 && *s1)
	{
		if (*s1 != *s2)
			return (*(unsigned char *) s1 - *(unsigned char *) s2);
		s1++;
		s2++;
		n--;
	}
	if (n > 0 && *s1 != *s2)
		return (*(unsigned char *) s1 - *(unsigned char *) s2);
	return (0);
}

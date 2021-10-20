/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: pniezen <pniezen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/19 16:35:08 by pniezen       #+#    #+#                 */
/*   Updated: 2021/10/19 16:35:09 by pniezen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i != 0)
	{
		if (s[i] == c)
			return ((char *) &s[i]);
		i--;
	}
	if (s[i] == c)
		return ((char *) &s[i]);
	return (0);
}

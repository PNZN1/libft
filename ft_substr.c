/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: pniezen <pniezen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/19 16:25:43 by pniezen       #+#    #+#                 */
/*   Updated: 2021/10/20 14:37:59 by pniezen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;

	if (!s)
		return (NULL);
	if (start >= len)
		return (ft_strdup(""));
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	str = ft_memcpy(str, &s[start], len);
	str[len] = '\0';
	return (str);
}

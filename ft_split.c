/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: pniezen <pniezen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/21 10:08:03 by pniezen       #+#    #+#                 */
/*   Updated: 2021/10/21 17:06:06 by pniezen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	len_wrds(const char *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c)
			count++;
		while (s[i] != c && s[i])
			i++;
		while (s[i] == c && s[i])
			i++;
	}
	return (count);
}

static char	*find_word(const char *s, char c)
{
	char	*str;
	size_t	i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	str = malloc((i + 1) * sizeof(char));
	i = 0;
	while (s[i] != c && s[i])
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

void	check_free(char **words, char *str)
{
	if (!str)
		free(words);
}

char	**ft_split(char const *s, char c)
{
	char	**words;
	size_t	i;
	size_t	n;

	i = 0;
	n = 0;
	if (!s)
		return (NULL);
	words = malloc(((len_wrds(s, c) + 1) * sizeof(char *)));
	if (!words)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c)
		{
			words[n] = find_word((s + i), c);
			check_free(words, words[n]);
			n++;
		}
		while (s[i] != c && s[i])
			i++;
		while (s[i] == c && s[i])
			i++;
	}
	words[n] = NULL;
	return (words);
}

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	l;

	i = 0;
	l = 0;
	if (*needle == '\0')
		return ((char *) haystack);
	while (haystack[i] != '\0' && i < len)
	{
		if (haystack[i] == needle[l])
		{
			while (needle[l] != '\0' && haystack[i] == needle[l]
				&& (i + l) < len)
				l++;
			if (needle[l] == '\0')
				return ((char *) &haystack[i]);
		}
		i++;
	}
	return (0);
}

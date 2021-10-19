#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;

	str1 = s1;
	str2 = s2;
	if (!str1 && !str2)
		return (0);
	while (n > 0)
	{
		if (*str1 != *str2)
			return (*(unsigned char *) str1 - *(unsigned char *) str2);
		str1++;
		str2++;
		n--;
	}
	if (n > 0 && *str1 != *str2)
		return (*(unsigned char *) str1 - *(unsigned char *) str2);
	return (0);
}

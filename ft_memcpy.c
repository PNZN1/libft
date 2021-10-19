#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*d;
	const char	*s;
	size_t		i;

	d = dst;
	s = src;
	i = 0;
	if (!dst && !src)
		return (0);
	while (n)
	{
		d[i] = s[i];
		i++;
		n--;
	}
	return (dst);
}

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;

	i = 0;
	if (!dst && !src)
		return (0);
	if (dst < src)
	{
		while (i < len)
		{
			((char *) dst)[i] = ((const char *) src)[i];
			i++;
		}
	}
	else
	{
		while (len > 0)
		{
			((char *) dst)[len - 1] = ((const char *) src)[len - 1];
			len--;
		}
	}
	return (dst);
}

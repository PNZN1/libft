#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	void	*ptr;
	size_t	count;

	count = ft_strlen(s1) + 1;
	ptr = malloc(count * 1);
	if (!ptr)
		return (NULL);
	return (ft_memcpy(ptr, s1, count));
}

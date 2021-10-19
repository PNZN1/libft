void	*ft_memset(void *b, int c, unsigned int len)
{
	unsigned char	*p;

	p = b;
	while (len)
	{
		*p = c;
		p++;
		len--;
	}
	return (b);
}

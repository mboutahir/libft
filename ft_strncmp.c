
int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i = 0;
	while(*s1 && *s2 && i <= n)
	{
		i++;
	}
	return(*s1 - *s2);
}

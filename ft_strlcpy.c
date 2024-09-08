#include <string.h>
#include <stdio.h>

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t i = 0;
	while(*src && i < size)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = "\0";
	return (i);
}
int main()
{
	char dest[20];
	char src[] = "hello";
	printf("got %li", ft_strlcpy(dest, src, 3));
	printf("got %li", strlcpy(dest, src, 3));
}

#include <stdio.h>
#include <string.h>
#include <stddef.h>
void *ft_memset(void *s, int c, size_t n)
{
	unsigned char *arr = s;
	size_t i = 0;
	while( i < n)
	{
		arr[i] = (unsigned char)c;
		i++;
	}
	return(s);
}

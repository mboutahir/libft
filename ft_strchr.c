#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	int i = 0;
	while(s[i] != c && s[i])
	{
		i++;
	}
	if(s[i] == c)
		return(&s[i]);
	else
		return NULL;
}

include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	int i = 0;
	int last = -1;
	while(s[i])
	{
		if(str[i] == c)
			last = i;
		i++;
	}
	if(c == '\0')
		return(&s[i]);
	if(last != -1)
		return (&s[last]);
	else
		return NULL;
}

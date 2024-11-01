#include "libft.c"

char *ft_strdup(const char *s)
{
	int i = 0;
	while (s[i])
	{
		i++;
	}
	char *dub = malloc(sizeof(char) * (i + 1));
	if(dub == NULL)
		return NULL;
	i=0;
	while(s[i])
	{
		dub[i] = s[i];
		i++;
	}
	dub[i] = '\0';

       return(dub);
}       

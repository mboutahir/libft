#include "libft.h"      
void ft_putendl_fd(char *s, int fd)
{
   	int i =0; 
	while(s[i])
   	{   
	    	write(fd, &s, 1); 
	    	i++;     
	}
	write(fd, "\n", 1);
} 

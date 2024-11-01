#include <limits.h>
#include <stdlib.h>
#include <stdio.h>                                                                                                                                                     

char	*ft_itoa(int nbr)
{
	char *str;
	int len = 0;
	int i = 0;
	long n;
	n = nbr;
	if(n <= 0)
	{
		len = 1;
	}
	i = n;
	while(i != 0)
	{
		i /= 10;
		len++;
	}
	str = malloc(sizeof(char) * (len + 1));
	if(!str)
		return NULL;
	str[len] = '\0';
	if(n == 0)
	{
		str[0] = '0';
	}
	if(n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	i = len -1;
	while(n >0)
	{
		str[i] = n % 10 + '0'; 
		n /= 10;
		i--;
	}


	return(str);
}

int main(void)
{
	    char *result;

	        result = ft_itoa(0);
		    printf("Input: 0, Output: %s\n", result);
		        free(result);

			    result = ft_itoa(12345);
			        printf("Input: 12345, Output: %s\n", result);
				    free(result);

				        result = ft_itoa(-6789);
					    printf("Input: -6789, Output: %s\n", result);
					        free(result);

						    result = ft_itoa(INT_MAX);
						        printf("Input: %d, Output: %s\n", INT_MAX, result);
							    free(result);

							        result = ft_itoa(INT_MIN);
								    printf("Input: %d, Output: %s\n", INT_MIN, result);
								        free(result);

									    return 0;
}

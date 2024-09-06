#include <stdio.h>
int atoi(const char *str)
{
	int total;
	int j = 1;
	while ( *str == ' ')
	{
		str++;
	}
	if(*str == '-' || *str == '+')
	{
		str++;
		if(*str == '-')
		{
			j = -j;
		}
	}
	while(*str <= '9' && *str >= '0')
	{
		total = 10 * total +(*str - '0');
		str++;
	}
	if(j == -1)
		return -total;
	return total;
}
int main()
{
	char str[]= "    -123nd";
	printf("%d", atoi(str));
	
}

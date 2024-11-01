#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
	if(n == -2147483648)
	{
		write(fd, "-2147483648", 11);
	}
	else if(n<10 && n>= 0)
	{
		n = n + '0';
		write(fd, &n, 1);
	}
	else if(n < 0)
	{
		n = -n;
		write(fd, "-", 1);
		ft_putnbr_fd(n, fd);
	}
	else if(n >= 10)
	{
		n = n / 10;
		ft_putnbr_fd(n, fd);
		n = n % 10 + '0';
		write(fd, &n, 1);
	}
}
		

#ifndef LIBFT_H
#define LIBFT_H
#include <stddef.h>
#include <unistd.h> 

int atoi(const char *str);
void ft_bzero(void *s, size_t n);
int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint(int c);
void *ft_memset(void *s, int c, size_t n);
void ft_putchar_fd(char c, int fd);
size_t ft_strlcpy(char *dst, const char *src, size_t size);
size_t ft_strlen(const char *s);
int ft_strncmp(const char *s1, const char *s2, size_t n);
int ft_tolower(int c);
int ft_toupper(int c);
#endif 

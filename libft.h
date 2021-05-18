#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <malloc.h>

void	*ft_memset(void *str, int c, size_t n);
void	*ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *restrict dest, const void *restrict src, size_t n);
void	*ft_memccpy(void *restrict d, const void *restrict src, int c, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
size_t	ft_strlen(const char *str);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlcat(char *restrict dest, const char *restrict src, size_t size);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);

int		ft_atoi(const char *str);
int		ft_tolower(int c);

#endif
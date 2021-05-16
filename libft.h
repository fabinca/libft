#ifndef LIBFT_H
#define LIBFT_H

	void	*ft_memset(void *str, int c, size_t n);
	void	*ft_bzero(void *s, size_t n);
	void	*ft_memcpy(void *restrict dest, const void *restrict src, size_t n);
	int		ft_atoi(const char *str);
	int		ft_tolower(int c);

#endif
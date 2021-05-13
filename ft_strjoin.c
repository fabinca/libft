#include <malloc.h>

size_t	ft_strlen(const char *str)
{
	size_t len;

	len = 0;
	while (str[len] != 0)
		len++;
	return (len);
}

char *ft_strjoin(char const *s1, char const *s2)
{
    size_t i;
    size_t j;
    char *ptr;

    ptr = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
    if (!ptr)
        return (0);
    i = 0;
    while (*(s1 + i))
    {
        ptr[i] = s1[i];
        i++;
    }
    j = 0;
    while (*(s2 + j))
    {
        ptr[i] = s2[j];
        i++;
        j++;
    }
    ptr[i] = 0;
    return (ptr);        
}

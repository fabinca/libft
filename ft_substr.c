#include <malloc.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t i;
    char *ptr;

    ptr = (char *)malloc(len + 1);
    if (!ptr)
        return (0);
    i = start;
    while (*(s + i) != 0 && i - start < len)
    {
        ptr[i] = s[i];
        i++;
    }
    ptr[i] = 0;
    return (ptr);
}

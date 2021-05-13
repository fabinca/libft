/* The memchr() function scans the initial n bytes of the memory */
/* area pointed to by s for the first instance of c. Both c and the */
/* bytes of the memory area pointed to by s are interpreted as */
/* unsigned char. */
/* The memchr() and memrchr() functions return a pointer to the */
/* matching byte or NULL if the character does not occur in the */
/* given memory area. */
#include <unistd.h>

void *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;

    i = 0;
    while (i < n)
    {
        if (*((char *)s + i) == c)
            return (s);
        i++;
    }
    return (NULL);
}

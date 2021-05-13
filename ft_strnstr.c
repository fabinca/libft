/* The functions return a reference to the first occurrence of the pattern in str. */
/* not more than the number of characters specified by a parameter, are matched */
/* The strnstr() function locates the first occurrence of the null-termi- */
/* nated string s2 in the string s1, where not more than n characters are */
/* searched.  Characters that appear after a `\0' character are not */
/* searched.  Since the strnstr() function is a FreeBSD specific API, it */
/* should only be used when portability is not a concern. */
/* If s2 is an empty string, s1 is returned; if s2 occurs nowhere in s1, */
/* NULL is returned; otherwise a pointer to the first character of the first */
/* occurrence of s2 is returned. */
#include <unistd.h>
int		ft_cmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strnstr(const char *str, const char *pattern, size_t len)
{
	size_t i;

	i = 0;
	if (*pattern == 0)
		return(str);
	while (i < len)
	{
		if (ft_cmp(pattern, str + i) == 0)
			return (str + i);
	}
	return (0);
}

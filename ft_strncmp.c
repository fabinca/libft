/* s1 > s2 (first unmatching ASCI value) -> return difference but only first n bytes */ 
#include <unistd.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		if (s1[i] == 0)
			return (0);
		i++;
	}
	return (0);
}

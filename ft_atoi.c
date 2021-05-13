#include <unistd.h>

int	ft_atoi(const char *str)
{
	size_t	i;
	int		num;
	int		negative_ct;

	i = 0;
	num = 0;
	negative_ct = 0;
	while (str[i] == ' ' | str[i] == '\f' | str[i] == '\n' |
			str[i] == '\r' | str[i] == '\t' | str[i] == '\v')
		i++;
	while (str[i] == '+' | str[i] == '-')
	{
		if (str[i] == '-')
			negative_ct++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	if (negative_ct % 2 == 1)
		num = num * -1;
	return (num);
}

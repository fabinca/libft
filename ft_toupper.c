/* The C library function int toupper(int c) converts a given letter to uppercase. */
/* Declaration int toupper(int c); */
/* Parameters c − This is the letter to be converted to uppercase. */
/* This function returns uppercase equivalent to c, if such value exists, */
/* else c remains unchanged. The value is returned as an int value that can  */
/* be implicitly casted to char. */

int	ft_tolower(int c)
{
	if (c >= 'a' & c <= 'z')
		return (c - 32);
	return (c);
}

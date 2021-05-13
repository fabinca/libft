/* The C library function int tolower(int c) converts a given letter to lowercase. */
/* Declaration int tolower(int c); */
/* Parameters c − This is the letter to be converted to lowercase. */
/* This function returns lowercase equivalent to c, if such value exists, */
/* else c remains unchanged. The value is returned as an int value that can  */
/* be implicitly casted to char. */

int	ft_tolower(int c)
{
	if (c >= 'A' & c <= 'Z')
		return (c + 32);
	return (c);
}

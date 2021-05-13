
/* The C library function int isapha(int c) checks if the passed character is alphabetic. */
/* Declaration int isalpha(int c); */
/* Parameters c − This is the character to be checked. */
/* Return Value This function returns non-zero value if c is a alphabetic, else it returns 0. */

int	ft_isalpha(int c)
{
    if (c >= 65 && c <= 90)
        return (1);
    if (c >= 97 && c <= 122)
        return (1);
    return (0);
}

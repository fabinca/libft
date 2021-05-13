
/* The C library function int isalnum(int c) checks if the passed character is alphanumeric. */
/* Declaration int isalnum(int c); */
/* Parameters c − This is the character to be checked. */
/* Return Value This function returns non-zero value if c is a digit or a letter, else it returns 0. */

int ft_isalnum(int c)
{
    if (c >= 48 && c <= 57)
        return (1);
    if (c >= 65 && c <= 90)
        return (1);
    if (c >= 97 && c <= 122)
        return (1);
    return (0);
}

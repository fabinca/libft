/* The C library function int isprint(int c) checks whether the passed character is printable. */
/* A printable character is a character that is not a control character. */
/* Declaration int isprint(int c); */
/* Parameters c − This is the character to be checked. */
/* This function returns a non-zero value(true) if c is a printable character else, zero (false). */

int isprint(int c)
{
	if (c >= 32 && c <= 126)
        return (1);
    return (0);
}

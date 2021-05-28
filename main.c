#include <string.h>
#include <strings.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <bsd/string.h>
#include "libft.h"

char	add(unsigned int i, char c)
{
	char result;

	result = i + c;
	return (result);
}

int		main(void)
{
	char str[50] = "cabccdefcghicendccabccdefcghicendc";
	const char src[50] = "abcdefg\0";
	const char src2[50] = "abcdef123";
	char dest[50] = "blabl";
	char dest2[10] = "12345\0\0\0\0\0";
	char *result;
	char **strings;

//	printf("\nTesting ft_memset \n");
//	printf("before\t %s\n", str);
//	memset(str, 70, 3);
//	printf("memset(str, 70, 3):\t %s \n", str);
//	ft_memset(str, 72, 3);
//	printf("ft_memset(str, 72, 3):\t %s \n", str);
//
//	printf("\nTesting ft_bzero \n");
//	printf("before\t %s\n", str);
//	bzero(str+2, 3);
//	printf("bzero(str, 3):\t\t %s \n", str);
//	ft_bzero(str+1, 4);
//	printf("ft_bzero(str, 4):\t %s \n", str);
//
//	printf("\nTesting ft_memcpy \n");
//   	strcpy(dest,"Heloooo!!");
//	printf("Before memcpy dest = %s\n", dest);
//	memcpy(dest, src, 40);
//	printf("After memcpy dest = %s\n", dest);
//	strcpy(dest,"Heloooo!!");
//	printf("Before ft_memcpy dest = %s\n", dest);
//	ft_memcpy(dest, src, 40);
//	printf("After ft_memcpy dest = %s\n", dest);
//
	//printf("\nTesting ft_memccpy \n");
	//printf("dest: %s\t src: %s\n", dest, src);  
	//memccpy( dest, src, 'y', 80 );
	//printf( "memccpy: %s\n", dest);
	//strcpy(dest,"blablabla");
	//printf("dest: %s\t src: %s\n", dest, src); 
    //ft_memccpy( dest, src, 'y', 80 );
    //printf( "ft_memccpy: %s\n", dest);
//
//	printf("\nTesting ft_memmove \n");
//	printf("dest: %s\t", dest);
//	memmove(dest+2, dest, 20);
//	printf("memmove dest: %s\n", dest);
//	strcpy(dest,"blablabla");
//	printf("dest: %s\t", dest);
//	ft_memmove(dest+2, dest, 20);
//	printf("ft_memmove dest: %s\n", dest);
//
//	printf("\nTesting ft_memchr \n");
//	printf("memchr(%s, 'a', 20):\t %p\n", src, memchr(src, '\0', 4));
//	printf("ft_memchr(%s, 'a', 20): %p\n", src, ft_memchr(src, '\0', 4));
//
//	printf("\nTesting ft_memcmp \n");
//	printf("memcmp(%s, %s, 5):\t %d\n", src, src2, memcmp(src, src2, 5));
//	printf("ft_memcmp(%s, %s, 5):\t %d\n", src, src2, ft_memcmp(src, src2, 5));
//	printf("memcmp(%s, %s, 6):\t %d\n", src, src2, memcmp(src, src2, 6));
//	printf("ft_memcmp(%s, %s, 6):\t %d\n", src, src2, ft_memcmp(src, src2, 6));
//	printf("memcmp(%s, %s, 7):\t %d\n", src, src2, memcmp(src, src2, 7));
//	printf("ft_memcmp(%s, %s, 7):\t %d\n", src, src2, ft_memcmp(src, src2, 7));
//	printf("memcmp(%s, %s, 8):\t %d\n", src, src2, memcmp(src, src2, 8));
//	printf("ft_memcmp(%s, %s, 8):\t %d\n", src, src2, ft_memcmp(src, src2, 8));
//	printf("memcmp(%s, %s, 50):\t %d\n", src, src2, memcmp(src, src2, 50));
//	printf("ft_memcmp(%s, %s, 50):\t %d\n", src, src2, ft_memcmp(src, src2, 50));
//
//	printf("\nTesting ft_strlen \n");
//	printf("strlen(%s) is %ld \n", str, strlen(str));
//	printf("ft_strlen(%s) is %ld \n", str, ft_strlen(str));
//
//	printf("\nTesting ft_strlcpy \n");
//	//printf("strlcpy(%s, %s, 20) is %ld", dest, src, strlcpy(dest, src, 20));
//	printf(" and dest is %s\n", dest);
//	printf("ft_strlcpy(%s, %s, 20) is %ld", dest2, src, ft_strlcpy(dest2, src, 20));
//	printf(" and dest is %s\n", dest2);
//
	//printf("\nTesting ft_strlcat \n");
	//memset(dest, 0, 15);
	//memset(dest, 'r', 6);
	//dest[11] = 'a';
	//printf("%zu, dest is %s \n",ft_strlcat(dest, "lorem", 15), dest);
	//printf("ft_strlcat(%s, %s, 7)", dest2, src);
	//printf(" is %ld and dest is %s\n", ft_strlcat(dest2, src, 7), dest2);
//
//	printf("\nTesting ft_strchr \n");
//	printf("ft_strchr(%s, 'c') is %s \n", src, ft_strchr(src, 'c'));
//	printf("strchr(%s, 'c') is %s\n", src, strchr(src, 'c'));
//
//	printf("\nTesting ft_strrchr \n");
//	printf("ft_strrchr(%s, 'c') is %s \n", src, ft_strrchr(src, 'c'));
//	printf("strrchr(%s, 'c') is %s\n", src, strrchr(src, 'c'));
//
	//printf("\nTesting ft_strnstr \n");
	//printf("ft_strnstr(%s, %s, 0) is %s \n", src, str, ft_strnstr(src, str, 5));
	//printf("strnstr(%s, %s, 10) is %s\n", src, str, strnstr(src, str, 5));
//
	//printf("\nTesting ft_strncmp \n");
	//printf("ft_strncmp(%s, %s, 7) is %d \n", src, src2, ft_strncmp(src, src2, 7));
	//printf("ft_strncmp( 6) is %d\n", ft_strncmp("test\200", "test\0", 6));
//
//	printf("\nTesting ft_atoi\n");u 
//	printf("%s\t -> %d\t original func: %d \n", "\v-2147483648", ft_atoi("\v-2147483648"), atoi("\v-2147483648"));
//	printf("%s\t -> %d\t original func: %d \n", "+2147483648", ft_atoi("+2147483648"), atoi("+2147483648"));
//	printf("%s\t -> %d\t original func: %d \n", "2147483647", ft_atoi("2147483647"), atoi("2147483647"));
//	printf("%s\t -> %d\t original func: %d \n", "-204abc34", ft_atoi("-204abc34"), atoi("-204abc34"));
//	printf("%s\t -> %d\t\t original func: %d \n", "--10abc3456", ft_atoi("--0abc3456"), atoi("--0abc3456"));
//	
//	printf("Testing ft_isalpha\n");
//	for (int j = 'A' - 1; j <= 'z' + 1; j++)
//	{
//		printf("%d:%c -> ft:%d\t\t", j, j, ft_isalpha(j));
//		if (j%4 == 0)
//			printf("\n");
//	}
//
//	printf("Testing ft_isdigit \n");
//	for (int j = '0' - 1; j <= '9' + 1; j++)
//	{
//		printf("%d:%c -> ft:%d\t\t", j, j, ft_isdigit(j));
//		if (j%4 == 0)
//			printf("\n");
//	}
//
//	printf("\n \033[0m Testing ft_isalnum \n");
//	for (int j = 'A' - 1; j <= 'z' + 1; j++)
//	{
//		printf("\033[0m");
//		printf("%d:%c ->",j, j);
//		if (ft_isalnum(j) == isalnum(j))
//			printf("\033[0;32m");
//		else
//			printf("\033[0;31m");
//		printf("ft:%d - orig:%d\t", ft_isalnum(j), isalnum(j));
//		if (j%4 == 0)
//			printf("\n");
//	}
//	
//	printf("\n \033[0m Testing ft_isascii \n");
//	for (int j = -128; j < 128; j++)
//	{
//		printf("\033[0m");
//		printf("%d:%c ->",j, j);
//		if (ft_isalnum(j) == isalnum(j))
//			printf("\033[0;32m");
//		else
//			printf("\033[0;31m");
//		printf("ft:%d - orig:%d\t", ft_isascii(j), isascii(j));
//		if (j%4 == 0)
//			printf("\n");
//	}
//
//	printf("\n \033[0m Testing ft_isprint \n");
//	for (int j = -128; j <= 128; j++)
//	{
//		printf("\033[0m");
//		printf("%d:%c ->",j, j);
//		if (ft_isalnum(j) == isalnum(j))
//			printf("\033[0;32m");
//		else
//			printf("\033[0;31m");
//		printf(" ft:%d - orig:%d\t", ft_isprint(j), isprint(j));
//		if (j%4 == 0)
//			printf("\n");
//	}
//
//	printf("\nTesting ft_toupper \n");
//	for (int j = 'A' - 1; j <= 'z' + 1; j++)
//	{
//		printf("%d:%c ->",j, j);
//		if (ft_toupper(j) == toupper(j))
//			printf("\033[0;32m");
//		else
//			printf("\033[0;31m");
//		printf("ft:%c - orig:%c\t", ft_toupper(j), toupper(j));
//		if (j%4 == 0)
//			printf("\n");
//		printf("\033[0m");
//	}
//
//	printf("\nTesting ft_tolower \n");
//	for (int j = 'A' - 1; j <= 'z' + 1; j++)
//	{
//		printf("%d:%c ->",j, j);
//		if (ft_tolower(j) == tolower(j))
//			printf("\033[0;32m");
//		else
//			printf("\033[0;31m");
//		printf("ft:%c - orig:%c\t", ft_tolower(j), tolower(j));
//		if (j%4 == 0)
//			printf("\n");
//		printf("\033[0m");
//	}
//
//	printf("\nTesting ft_calloc \n");
//	printf("calloc(5,5): %p \n", ft_calloc(80, 2));
//	printf("ft_calloc(5,5): %p \n", calloc(80, 2));
//
	//printf("Testing ft_strdup \n");
	//result = strdup(src);
	//printf("strdup(%s): %p %s \n", src, result, result);
	//result = "000000000";
	//printf("%s\n", result);
	//result = ft_strdup(src);
	//printf("ft_strdup(%s): %p %s \n", src, result, result);
//
//printf("\nTesting ft_substr \n");
//printf("ft_substr(%s, 100, 100) is %s \n", src, ft_substr(src, 5, 2));
//
//	printf("\nTesting ft_strjoin \n");
//	printf("ft_strjoin(%s, %s) is %s \n", src, src2, ft_strjoin(src, src2)); 
//
	//printf("\nTesting ft_strtrim \n");
	//printf("ft_strtrim(%s, acb) is %s \n", src, ft_strtrim(src, "acb"));
	//char s1[] = "lorem \n ipsum \t dolor \n sit \t amet";
	//printf("ft_strtrim(%s, ' ') is %s \n", s1, ft_strtrim(s1, " "));
	//char s2[] = "lorem ipsum dolor sit amet";
	//printf("ft_strtrim(%s, 'te') is %s \n", s2, ft_strtrim(s2, "te"));
	//char s3[] = " lorem ipsum dolor sit amet";
	//printf("ft_strtrim(%s, 'l ') is %s \n", s3, ft_strtrim(s3, "l "));
	//char s4[] = "lorem ipsum dolor sit amet";
	//printf("ft_strtrim(%s, 'tel') is %s \n", s4, ft_strtrim(s4, "tel"));
//	printf("\nTesting ft_split \n");
//	strings = ft_split(src, 'c');
//	
//	for (int i = 0; strings[i] != 0; i++)
//		printf("ft_split(%s) is %s / %p \n", src, strings[i], strings[i]);
//
	printf("\nTesting ft_itoa \n");
	printf("%ld\t -> %s\n", -2147483649, ft_itoa(-2147483649));
	printf("%ld\t -> %s\n", -2147483648, ft_itoa(-2147483648));
	printf("%lld\t -> %s\n", -2147483648LL, ft_itoa(-2147483648LL));
	printf("%d\t -> %s\n", -9, ft_itoa(-9));
//
	//printf("\nTesting ft_strmapi \n");
	//printf("ft_strmapi(%s, add) is %s\n", src, ft_strmapi(src, add));
//
//	printf("Testing ft_putchar_fd \n");
//	ft_putchar_fd('a', 1);
//	printf("Testing ft_putstr_fd \n");
//	ft_putstr_fd("Testing ft_putstr_fd - this is the output", 1);
//
//	printf("Testing ft_putnbr_fd \n");
//	ft_putnbr_fd(-21459, 1);
//
//	printf("Testing ft_putendl_fd \n");
//	ft_putendl_fd("Testing ft_putendl_fd - this is the output", 1);
	return (0);
}

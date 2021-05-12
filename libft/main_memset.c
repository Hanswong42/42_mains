#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	unsigned char	c = 'c';
	char			s1[6] = "Hello";

	unsigned char	d = 'd';
	char			s2[6] = "Hello";
	// Test 1 : Functionality
	printf("C memset:\t%s\n", memset(s1, c, 3));
	printf("ft_memset:\t%s\n", ft_memset(s2, c, 3));
	// Test 2 : Boundary values
	printf("C memset:\t%s\n", memset(s1, d, (0)));
	printf("ft_memset:\t%s\n", ft_memset(s2, d, (0)));
	// Test 3 : Unsigned char, run with cat -e
	printf("C memset:\t%s\n", memset(s1, 129, 3));
	printf("ft_memset:\t%s\n", ft_memset(s2, 129, 3));
	// Test 4 : Functionality
	printf("C memset:\t%s\n", memset(s1, d, 4));
	printf("ft_memset:\t%s\n", ft_memset(s2, d, 4));
}

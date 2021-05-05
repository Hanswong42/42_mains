#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*s1 = "Hello";
	char	*s2 = "Hell\0o";

	printf("%d\n", strlen(s1));
	printf("%d\n", ft_strlen(s2));
	printf("%d\n", strlen(s1));
	printf("%d\n", ft_strlen(s2));
}
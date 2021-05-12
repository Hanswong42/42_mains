#include "libft.h"
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	*s1 = "Hello";

	printf("String Head: %p\n", (void *)s1);
	printf("String: %s\n", s1);
	printf("Expected l position: %p\n", (void *)(strchr(s1, 'l')));
	printf("Returned l position: %p\n", (void *)(ft_strchr(s1, 'l')));
	printf("Expected null position: %p\n", (void *)(strchr(s1, '\0')));
	printf("Returned null position: %p\n", (void *)(ft_strchr(s1, '\0')));
}

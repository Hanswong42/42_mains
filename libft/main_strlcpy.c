#include "libft.h"
#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "abcdefghijklmnopqrst";
    char dest[] = "ABCDEFGHIJKLMNOPQRST";
    printf("Source:\t%s\nDest:\t%s\n", str, dest);
    printf("Copying 10 characters, returns length of source: %d\n", ft_strlcpy(dest, str, 10));
    printf("Source:\t%s\nDest:\t", str);
    for(int i = 0; i < 20; i++)
    {
        printf("%c", dest[i]);
    }
    printf("\n");
}

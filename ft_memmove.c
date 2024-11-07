#include "libft.h"
void *fr_memmove(void *dest, const void *src, size_t n)
{
    unsigned char	*dest_c;
    unsigned char	*src_c;
    size_t			i;

    dest_c = (unsigned char *)dest;
    src_c = (unsigned char *)src;
    i = 0;
    if (dest_c == NULL && src_c == NULL)
        return (NULL);
    if (dest_c < src_c)
    {
        while (i < n)
        {
            dest_c[i] = src_c[i];
            i++;
        }
    }
    else
    {
        while (n > 0)
        {
            dest_c[n - 1] = src_c[n - 1];
            n--;
        }
    }
    return (dest);
}
#include <stdio.h>
#include <string.h>

int main()
{
    char src[] = "Hello, World!";
    char dest[50];

    printf("Avant %s\n", src);
    fr_memmove(dest, src, 13);
    printf("Après %s\n", dest);

    char overlap_src[] = "Overlap Test";
    fr_memmove(overlap_src + 3, overlap_src, 5);
    printf("Après overlap %s\n", overlap_src);
    return 0;
}

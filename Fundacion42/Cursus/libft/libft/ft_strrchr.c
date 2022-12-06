#include <stddef.h>
#include "libft.h"

char	*ft_strrchr(char *s, int c)
{
	int	i;

	i = 0;

	while(s[i] != '\0')
	{
		i++;
	}
	while (i != 0)
	{
		if (s[i] == (unsigned char)c)
		{
			return ((char *)&s[i]);
		}
		i--;
	}
	if (s[i] == (unsigned char)c)
	{
		return ((char *)&s[i]);
	}
	return (NULL);
}


#include <string.h>
#include <stdio.h>

int main(void)
{
    char str[] = "epddtf";
    char c = 'e';
    char *result;

    result = ft_strrchr(str, c);
    printf("%s \n", result);
}
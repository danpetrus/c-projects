#include "libft.h"

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	if (('a' <= str[0]) && (str[0] <= 'z'))
		str[0] = str[0] - 'a' + 'A';
	while (str[i + 1] != '\0')
	{
		if ((str[i] < 'a' || str[i] > 'z') &&
				(str[i] < 'A' || str[i] > 'Z') &&
				(str[i] < '0' || str[i] > '9'))
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] = str[i + 1] - 'a' + 'A';
		}
		else
		{
			if (str[i + 1] >= 'A' && str[i + 1] <= 'Z')
				str[i + 1] = str[i + 1] + 'a' - 'A';
		}
		i++;
	}
	return (str);
}

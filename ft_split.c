#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// char **ft_split(char *s, char c)
// {
// 	char **str;
// 	int a = 0;
// 	int i = 0;
// 	int b = 0;
// 	char *copy = s;
// 	str = malloc(sizeof(char*) + 50);
// 	while(copy[i])
// 	{
		
// 		if (copy[i] == c)
// 		{
// 			//copy[i] = 's';
// 			printf("%s\n", str[a]);
// 			i++;
// 			a++;
// 			b = 0;
			
// 		}
// 		str[a][b] = copy[i];
// 		s[i];
// 		b++;
// 		i++;
// 		//printf("%s \n", str[a]);
// 	}
// 	printf("%s\n", str[a]);
// 	return(s);
// }

char *ft_set(char *str, char delim)
{
	int count;
	int i;
	char *dup;

	dup = malloc(sizeof(char *) * strlen(str)); 
	if (*str != 0)
	{
		while(*str)
		{
			if(*str == delim)
			{
				*dup = '\0';
				*str++;
				return(str);
			}
			*dup++ = *str++;
		}
	}
	return(str);
}

char **ft_split(char const *s, char c)
{
	char **str;
	char *copy;
	char *tmp;
	int i;
	int a;

	i = 0;
	a = 0;
	copy = (char *)s;
	tmp = malloc(sizeof(char *) * (strlen(copy) + 1));
	tmp = ft_set(copy, c);
	printf("%s\n", tmp);
	tmp = ft_set(tmp, c);
	printf("%s\n", tmp);

	// while(*copy)
	// {
	// 	if(*copy == c)
	// 	{
	// 		*(str + a) = ft_set(copy, c);
	// 		str++;
	// 		a++;
	// 	}
	// 	copy++;

	// }
	// while(*s)
	// {
	// 	printf("%s\n", *(str + i));
	// 	i++;
	// }
	return(str);
}

int main()
{
	char *s = "privet kak ti";
	char c = ' ';
	ft_split(s, c);
	// ft_set(s, c);
}
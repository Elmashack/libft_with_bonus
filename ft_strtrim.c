/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmas <elmas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 17:17:39 by elmas             #+#    #+#             */
/*   Updated: 2021/04/26 18:53:54 by elmas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char    *ft_begin(char *str, char *set)
{
    int i;

    i = 0;
    while(*str)
    {
        if(set[i] == *str)
        {
            str++;
            i = -1;
        }
		i++;
        if(set[i] == '\0' && set[i] != *str)
            break;
      
    }
	return (str);
}

char    *ft_end(char *str, char *set)
{
    int len;
	int i;
	
	i = 0;
    len = 0;
    while(*str)
    {
		str++;
		len++;
    }
	while(len > 0)
	{
		if(set[i] == *str)
		{
			str--;
			len--;
			i = -1;
		}
		i++;
		if (set[i] == '\0' && set[i] != *str)
			break;
	}
	return (str);
}
char *ft_strtrim(char const *s1, char const *set)
{
	char *sbegin;
	char *strend;
	char *copy;
	int size;
	int i = 0;
	
	size = 0;
	sbegin = ft_begin((char *)s1, (char *)set);
	strend = ft_end((char *)s1, (char *)set);
	while (sbegin[size])
		size++;
	copy = malloc(sizeof(char *) * (size +1));
	while (*sbegin != *strend)
	{
		copy[i] = *sbegin++;
		printf("%c \n", copy[i]);
		i++;
	}
	copy[i] = *strend;
	
	return (copy);
}

int main()
{
	char *c;
	char *str = "www  wfsw Hello www! wwwf wss";
	char *begin;
	
	begin = ft_begin(str, "wfs ");
	c = ft_strtrim(str, "wfs ");
	printf("%s \n",begin);
	printf("%s \n",c);
}
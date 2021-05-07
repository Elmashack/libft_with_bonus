/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmas <elmas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 16:36:44 by elmas             #+#    #+#             */
/*   Updated: 2021/04/29 17:35:53 by elmas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char func(unsigned int a, char c)
{
	return('a');
}
char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *newch;
	int i;
	
	i = 0;
	if(!s || !f)
		return(NULL);
	newch = malloc(sizeof(s) * strlen(s + 1));
	if (newch == NULL)
		return(NULL);
	while(s[i])
	{
		newch[i] = f(i, s[i]);
		i++;
	}
	return (newch);
}

int main()
{
	char *str = "abcd";
	printf("%s\n", ft_strmapi(str, func));	
}
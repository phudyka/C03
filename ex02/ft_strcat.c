/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 23:03:16 by phudyka           #+#    #+#             */
/*   Updated: 2022/02/12 22:28:26 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strcat(char *dest, char *src)
{
	int	s1;
	int	s2;

	s1 = 0;
	s2 = 0;
	while (dest[s1] != '\0')
		s1++;
	while (src[s2] != '\0')
	{
		dest[s1] = src[s2];
		s1++;
		s2++;
	}
	dest[s1] = '\0';
	return (dest);
}
/*#include <string.h>
#include <stdio.h>
int main (void) 
{
   char	src[] = "fin";
   char	dest[] = "debut";

   printf("%s\n", src);
   printf("%s\n", dest);
   ft_strcat(dest, src);
   printf("Apres concatenation : |%s|", dest);
   
   return(0);
}*/

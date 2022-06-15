/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 22:00:18 by phudyka           #+#    #+#             */
/*   Updated: 2022/02/12 22:23:51 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && (i < n - 1))
		i++;
	return (s1[i] - s2[i]);
}
/*#include <stdio.h>
#include <string.h>
int main()
{
	char s1[] = "texte"; //temoin
	char s2[] = "texte";
	char s3[] = "textd";
 
 	int c = 0;
	c = ft_strncmp (s1, s2, 6);
 
  	int c2 = 0;
  	c2 = ft_strncmp( s2, s3, 6);
 
  printf ("Compare s1 avec s2 : %i\nCompare s2 avec s3 : %i", c, c2);
  return 0;
}*/

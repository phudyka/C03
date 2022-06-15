/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 21:07:44 by phudyka           #+#    #+#             */
/*   Updated: 2022/02/12 22:15:40 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char*s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}
/*#include <stdio.h>
int main()
{
	char s1[]="texte"; //temoin
	char s2[]="texte"; 
	char s3[]="texrd";
 
 	int c = 0;
	c = ft_strcmp (s1,s2);
 
  int c2 = 0;
  c2 = ft_strcmp(s2,s3);
 
  printf ("Comparaison s1 avec s2 : %i\nComparaison s2 avec s3 : %i", c, c2);
  return 0;
}*/
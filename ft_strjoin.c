/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnottle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 11:56:35 by jnottle           #+#    #+#             */
/*   Updated: 2022/07/09 10:19:52 by jnottle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdlib.h>
//#include <stdio.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int			i;
	int			s;
	int			s1len;
	int			s2len;
	char		*s3;

	i = 0;
	s = 0;
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	s3 = malloc(s1len + s2len + 1);
	if (s3 == NULL)
		return (NULL);
	while (s1[i])
	{
		s3[i] = s1[i];
		i++;
	}
	while (s2[s])
	{
		s3[i + s] = s2[s];
		s++;
	}
	s3[i + s] = '\0';
	return (s3);
}
/*
int	main(void)
{
	int		size;
	char	**strs;
	char	*sep;
	char	*result;

	strs = (char **)malloc(4 * sizeof(strs));
	strs[0] = "Dolphin";
	strs[1] = "Shark";
	strs[2] = "Penguin";
	strs[3] = "Seal";
	sep = "!!!";
	size = 4;
	result = ft_strjoin(size, strs, sep);
	printf("%s\n", result);
}
*/

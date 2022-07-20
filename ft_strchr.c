/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnottle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 14:52:52 by jnottle           #+#    #+#             */
/*   Updated: 2022/07/06 16:51:43 by jnottle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Locate character in string (string checker)

#include "libft.h"
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0' && *s != (char)c)
		s++;
	if (*s != (char)c)
		return (NULL);
	else
		return ((char *)s);
}

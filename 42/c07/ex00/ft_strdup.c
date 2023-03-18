/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakaya <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 23:34:21 by bakaya            #+#    #+#             */
/*   Updated: 2023/02/18 23:42:09 by bakaya           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
int	ft_strlen(char *a)
{
	int	i;

	i = 0;
	while (a[i] != '\0')
	{
		i++;
	}
	return (i);
}

char *ft_strdup(char *src)
{
	int	x;
	char	*dest;
	int	i;

	x = ft_strlen(src);
	dest = (char *)malloc(x * size) 
}

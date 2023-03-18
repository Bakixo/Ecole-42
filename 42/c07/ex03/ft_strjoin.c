/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakaya <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 21:31:10 by bakaya            #+#    #+#             */
/*   Updated: 2023/02/23 02:08:06 by bakaya           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

int	ft_strlen(char **c, char *sep)
{
	int	i;
	int	j;
	int	t;
	int	size;

	t = 0;
	size = 0; 
	i = 0;
	j = 0;
	while (sep[t])
	{
		t++;
	}
	while (c[i][j])
	{
		j = 0;
		while (c[i][j])
		{
			size++;
			j++;
		}
		size += t;
		i++;
	}
	return (size-t);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	char	*dizi;
	int ai;
	int	flengt;

	flengt = ft_strlen(strs,sep);
	dizi = malloc(sizeof(char) * flengt + 1);
	i = 0;
	ai = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			dizi[ai++] = strs[i][j++];
		}
		j = 0;
		while (sep[j] != '\0' && i != size - 1)
		{
			dizi[ai++] = sep[j++];
		}
		i++;
	}
	dizi[ai] = '\0';
	return (dizi);
}
int main()
{
	char *strs[3];
	char v[] = "Mete";
	char v1[] = "ABS";
	char v2[]="asd";
	char sep[] = ", ";

	strs[0] = v;
	strs[1] = v1;
	strs[2] = v2;
	printf("%s",ft_strjoin(3, strs, sep));
}

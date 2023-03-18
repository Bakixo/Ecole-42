/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakaya <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 21:11:54 by bakaya            #+#    #+#             */
/*   Updated: 2023/02/21 21:19:54 by bakaya           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	num;
	int	*dizi;
	int	i;

	i = 0;
	num = max - min;
	if (max <= min)
		return (0);
	dizi = (int *)malloc(num * sizeof(int));
	while (min < max)
	{
		dizi[i];
		i++;
		min++;
	}
	dizi[i] = '\0';
	return (dizi);
}

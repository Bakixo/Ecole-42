/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakaya <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 21:20:27 by bakaya            #+#    #+#             */
/*   Updated: 2023/02/21 21:29:56 by bakaya           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	num;
	int	*dizi;
	int	i;

	i = 0;
	num = max - min;
	if (max <= min)
	{
		dizi = NULL;
		return (0);
	}
	dizi = (int *)malloc(num * sizeof(int));
	if (dizi == NULL)
		return (-1);
	while (min < max)
	{
		dizi[i] = min;
		i++;
		min++;
	}
	dizi[i] = '\0';
	*range = dizi;
	return (num);
}
int		main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	size;
	int	i = 0;

	min = 5;
	max = 10;
	size = ft_ultimate_range(&tab, min, max);
	while(i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}

}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamashi <kyamashi@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 02:18:34 by kyamashi          #+#    #+#             */
/*   Updated: 2025/06/21 02:18:35 by kyamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int	count_digit(int n)
{
	int	digit;

	digit = 0;
	if (n == 0)
		return (1);
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		n *= (-1);
		digit += 1;
	}
	while (n != 0)
	{
		n /= 10;
		digit += 1;
	}
	return (digit);
}

static void	edge(char *res, int *n)
{
	if (*n == 0)
		res[0] = '0';
	if (*n == -2147483648)
	{
		res[1] = '2';
		*n = -147483648;
	}
	if (*n < 0)
	{
		res[0] = '-';
		*n *= (-1);
	}
}

char	*ft_itoa(int n)
{
	char	*res;
	int		len;

	len = count_digit(n);
	res = malloc(len + 1);
	if (!res)
		return (NULL);
	res[len] = '\0';
	edge(res, &n);
	len--;
	while (n > 0)
	{
		res[len--] = n % 10 + '0';
		n /= 10;
	}
	return (res);
}
/*
#include <stdio.h>
int main(void)
{
	int a = -2147483648;

	printf("%s\n", ft_itoa(a));
	return (0);
}*/

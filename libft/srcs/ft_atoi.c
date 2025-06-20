/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamashi <kyamashi@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 02:24:56 by kyamashi          #+#    #+#             */
/*   Updated: 2025/06/21 02:24:58 by kyamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_atoi(const char *nptr)
{
	int	num;
	int	sign;

	num = 0;
	sign = 1;
	while (*nptr == ' ' || ('\t' <= *nptr && *nptr <= '\r'))
		nptr++;
	if (*nptr == '+' || *nptr == '-')
		sign = -1 + 2 * (*(nptr++) == '+');
	while (*nptr && ft_isdigit(*nptr))
		num = num * 10 + (*(nptr++) - '0');
	return (sign * num);
}

// #include <stdio.h>
// #include <stdlib.h>

// int	main(int argc, char* argv[])
// {
// 	if (argc == 1) return 0;
// 	printf("original: |%s|\n", argv[1]);
// 	printf("atoi:     |%d|\n", atoi(argv[1]));
// 	printf("ft_atoi:  |%d|\n", ft_atoi(argv[1]));
// 	return 0;
// }

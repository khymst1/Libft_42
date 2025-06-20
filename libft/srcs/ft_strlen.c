/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamashi <kyamashi@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 02:22:28 by kyamashi          #+#    #+#             */
/*   Updated: 2025/06/21 02:22:30 by kyamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

size_t	ft_strlen(const char *s)
{
	const char	*h;

	h = s;
	while (*s)
		s++;
	return (s - h);
}

/*
#include <stdio.h>

int	main(int argc, char* argv[])
{
	if (argc == 1) return (0);
	printf("%d\n", ft_strlen(argv[1]));
	return (0);
}
*/

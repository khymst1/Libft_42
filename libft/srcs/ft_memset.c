/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamashi <kyamashi@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 02:19:33 by kyamashi          #+#    #+#             */
/*   Updated: 2025/06/21 02:19:34 by kyamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *) s;
	while (n--)
		*p++ = (unsigned char) c;
	return (s);
}

/*
#include <stdio.h>

int main(void) {
    char   ohayo[10];
    ft_memset(ohayo, 'a', 5);
    printf("%s\n", ohayo);
    return 0;
}*/

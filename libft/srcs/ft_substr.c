/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamashi <kyamashi@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 02:23:57 by kyamashi          #+#    #+#             */
/*   Updated: 2025/06/21 02:24:01 by kyamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	copy_len;
	size_t	s_len;
	char	*sub;

	copy_len = 0;
	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (len < s_len - start)
		copy_len = len;
	else
		copy_len = s_len - start;
	sub = malloc(copy_len + 1);
	if (!sub)
		return (NULL);
	ft_memmove(sub, s + start, copy_len);
	sub[copy_len] = '\0';
	return (sub);
}

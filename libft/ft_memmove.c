/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otapan <otapan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 15:09:46 by otapan            #+#    #+#             */
/*   Updated: 2022/02/23 17:39:22 by otapan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	i = 0;
	if (!src && !dst)
		return (0);
	if (d < s && (dst || src))
		ft_memcpy(dst, src, len);
	else
	{
		while (len > 0)
		{
			d[len - 1] = s[len - 1];
			len--;
		}
	}
	return (dst);
}
/* int main(void)
{
	char dest1sys[] = "Aticleworld";
	const char src1sys[] = "Amlendra";
	printf("Before memmove >> dest1sys = %s, src1sys = %s\n\n", dest1sys, src1sys);
	ft_memmove(dest1sys, src1sys, 5);
	printf("After memmove >> dest1sys = %s, src1sys = %s\n\n", dest1sys, src1sys);
	printf("---------------\n");
} */
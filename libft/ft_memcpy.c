/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otapan <otapan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 17:01:37 by otapan            #+#    #+#             */
/*   Updated: 2022/02/23 17:37:12 by otapan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	unsigned const char	*s;

	if (!src && !dest)
		return (0);
	if ((dest == src) || n == 0)
		return (dest);
	d = dest;
	s = src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
/* int main()
{
	char src1sys[20] = "How Are you ?";
	char dst1sys[20] = {0};
	ft_memcpy(dst1sys, src1sys, sizeof(src1sys));
	printf("dst1sys = %s\n", dst1sys);
	printf("---------------\n");
} */
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otapan <otapan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 15:25:52 by otapan            #+#    #+#             */
/*   Updated: 2022/02/23 17:30:13 by otapan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	if (n == 0)
		return (0);
	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	i = 0;
	while (*ptr1 == *ptr2 && ++i < n)
	{
		ptr1++;
		ptr2++;
	}
	return (*ptr1 - *ptr2);
}
/* int main(void)
{

	char str1sys1[15] = "Olcay";
	char str1sys2[15] = "Olcet";
	int ret1sys = memcmp(str1sys1, str1sys2, 5);
	printf("%d\n", ret1sys);
	printf("---------------\n");
} */
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otapan <otapan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 12:32:13 by otapan            #+#    #+#             */
/*   Updated: 2022/02/24 12:25:24 by otapan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	c;
	size_t	d;

	if (dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	c = ft_strlen(dst);
	d = 0;
	while (src[d] != '\0' && c + 1 < dstsize)
	{
		dst[c] = src[d];
		c++;
		d++;
	}
	dst[c] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[d]));
}
/* int main(void)
{

	
	// strcpy(stra1, "Hi I m Pavan Kumar Sake . This is my 1st string to append to other string , \n");
	//strcpy(stra2, " (This is my 2nd string to concatenate and then to print the result from the 1st string variable )\n"); 
	char stra1[] = "Olcay";
	char stra2[] = "Cagri";
	
	printf("String before concatenation: \"%s\"\n", stra1);
	ft_strlcat(stra1, stra2, 3);
	printf("\nString after concatenation: \"%s\"\n", stra1);
	printf("---------------\n");
} */
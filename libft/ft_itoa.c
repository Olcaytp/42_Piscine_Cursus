/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otapan <otapan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 14:37:35 by otapan            #+#    #+#             */
/*   Updated: 2022/02/18 15:58:00 by otapan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_ff(long n)
{
	size_t	karakter;

	karakter = 0;
	if (n < 0)
	{
		karakter++;
		n = -n;
	}
	while (n >= 1)
	{
		karakter++;
		n = n / 10;
	}
	return (karakter);
}

static char	*ft_zz(char *rtn, long nbr, int len, int neg)
{
	if (nbr != 0)
		rtn = malloc(sizeof(char) * (len + 1));
	else
		return (rtn = ft_strdup ("0"));
	if (!rtn)
		return (0);
	if (nbr < 0)
	{
		neg++;
		nbr = -nbr;
	}
	rtn[len] = '\0';
	while (--len)
	{
		rtn[len] = (nbr % 10) + '0';
		nbr = nbr / 10;
	}
	//printf("%ld\n", nbr);
	if (neg == 1)
		rtn[0] = '-';
	else
		rtn[0] = (nbr % 10) + '0';
	return (rtn);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*rtn;
	long	nbr;
	int		neg;

	nbr = n;
	len = ft_ff(nbr);// 200 ün uzunluk değeri karakter olarak geri döner -> 3
	rtn = 0;
	neg = 0;
	rtn = ft_zz(rtn, nbr, len, neg); //nbr= 200 sayısını, len= 3 karakter uzunluğunu, 
	//neg negatiflik değerini ve rtn dizi olacak(36.satırda rtn'ye hafızada yer ayrıldığıgörülüyor) değerini parametre olarak zz fonk.a gönderdik.dönen değeri rtn ye eşitledik.
	if (!rtn)
		return (0);
	return (rtn);
}

int main()
{
    printf("%s",ft_itoa(200));
}
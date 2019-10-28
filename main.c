/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: siferrar <siferrar@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/28 14:22:53 by siferrar     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/28 18:25:32 by siferrar    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>


char	mapi(unsigned int i, char c)
{
	static int indexArray[11] = {0};

	if (i > 10 || indexArray[i] == 1)
		write(1, "wrong index\n", 12);
	else
		indexArray[i] = 1;
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}

int main(void)
{
	
	int i = 0;
	char **strs = ft_split("bonjour comment ca va", ' ');

	while (strs && strs[i])
	{
		printf("SdPLIT: %s\n", strs[i++]);
		free(strs[i - 1]);
	}
	free(strs);
	
	char *resitoa;
	resitoa = ft_itoa(12345679);
	printf("ITOA:%s\n", resitoa);
	free(resitoa);

	char *restrim;
	restrim = ft_strtrim((char *)NULL, (char *)NULL);
	printf("STRTRIM:%s\n", restrim);
	free(restrim);
	
	char *ressubstr;
	ressubstr = ft_substr("", 2, 1000000000000);
	printf("SUBSTR:%s\n", ressubstr);
	free(ressubstr);
	
	char *resjoin;
	resjoin = ft_strjoin(NULL, NULL);
	printf("STRJOIN:%s\n",resjoin);
	free(resjoin);
	
	char *resmap;
	resmap = ft_strmapi("", NULL);
	printf("STRMAPI:%s\n", resmap);
	free(resmap);
	
	ft_putchar_fd('o', 0);
	ft_putstr_fd("dsfgdsfgsdfgdsfg", 0);
	ft_putnbr_fd(156, 0);
	ft_putendl_fd("sdfgsdfgdsfgdfg", 0);
	return(1);
}
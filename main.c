#include <string.h>
#include <stdio.h>
#include <stdlib.h>
void		*ft_memmove(void *dst, const void *src, size_t len);
char			*ft_strtrim(char const *s1, char const *set);
void	*ft_memcpy(void * dst, const void * src, size_t n);

int main(void)
{
	setbuf(stdout, NULL);
	int size = 3;
	printf("----------------------------------------------------------\n");
	printf("---- Test 1\n");
	char	dst1[0xF0];
	char	dst2[0xF0];
	char	*data = "thiß ß\xde\xad\xbe\xeftriñg will be øvérlapéd !\r\n";
			size = 0xF0 - 0xF;

	memset(dst1, 'A', sizeof(dst1));
	memset(dst2, 'A', sizeof(dst2));

	memcpy(dst1, data, strlen(data));
	memcpy(dst2, data, strlen(data));
	printf("REAL:%s-\n", memmove(dst1 + 3, dst1, size));
	printf("MINE:%s-\n", ft_memmove(dst2 + 3 , dst2, size));
	
	/*printf("\n---- Test 1.2\n");
	char dst1p[] = "coucoa";
	char dst1p2[] = "coucoa";
	printf("REAL:%s-\n", memmove(dst1p, dst1p - 10, size));
	printf("MINE:%s-\n", ft_memmove(dst1p2 , dst1p2 - 10, size));

	printf("\n---- Test 2\n");
	size = 7;
	char src3[] = "coucou";
	char src4[] = "coucou";
	void* dst3[20];
	void* dst4[20];
	printf("REAL:%s-\n", memmove(dst3, src3, size));
	printf("MINE:%s-\n", ft_memmove(dst4 , src4, size));
	
	printf("\n---- Test 3\n");
	size = 33;
	char	*src5 = "thi\xffs i\xfas \0a g\xde\xadood \0nyan \0cat\0 !\r\n";
	char	dst5[0xF0];
	char	dst6[0xF0];

	printf("REAL:%s-\n", memmove(dst5, src5, size));
	printf("MINE:%s-\n", ft_memmove(dst6 , src5, size));
	printf("%c", '\n');
	printf("\n---- Test 4\n");
	char	*src7 = "\0\0\0\0\0\0\0\0\0";
	char	*src8 = "\0\0\0\0\0\0\0\0\0";
	size = 5;
	char	dst7[0xF0];
	char	dst8[0xF0];

	printf("REAL:%s-\n", memmove(dst7, src7, size));
	printf("MINE:%s-\n", ft_memmove(dst8 , src8, size));
*/
	return (0);
}
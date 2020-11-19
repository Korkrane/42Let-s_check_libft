#include <stdio.h>
#include <strings.h>
#include <string.h>

void ft_bzero(void *s, size_t n);

int main(void)
{
	char test1[14] = "Hello World !";
	char test2[5] = "Next";
	char test3[12] = "only 010101";
	char test4[8] = "FU-SION";
	char test5[23] = "underscore_will_be_gone";
	char test6[15] = "only1numbers1?";
	char test7[10] = "1 + 1 = 2";
	char test8[18] = "Not a good letter";
	char test9[8] = "123a465";
	char test10[7] = ". / . ";
	//TEST1
	ft_bzero(test1, 0);
	ft_bzero(test2, 1);
	ft_bzero(test3, 2);
	ft_bzero(test4, 3);
	ft_bzero(test5, 4);
	ft_bzero(test6, 5);
	ft_bzero(test7, 6);
	ft_bzero(test8, 7);
	ft_bzero(test9, 8);
	ft_bzero(test10, 0);

	printf("%s\n", (char *)test1);
	printf("%s\n", (char *)test2);
	printf("%s\n", (char *)test3);
	printf("%s\n", (char *)test4);
	printf("%s\n", (char *)test5);
	printf("%s\n", (char *)test6);
	printf("%s\n", (char *)test7);
	printf("%s\n", (char *)test8);
	printf("%s\n", (char *)test9);
	printf("%s\n", (char *)test10);
	return (0);
}

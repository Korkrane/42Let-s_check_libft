#include <stdio.h>
#include <string.h>

void *ft_memchr(const void *s, int c, size_t n);

int main(void)
{
	char string1_1[14] = "Hello World !";
	char string1_2[25] = "is_this_a_snake_string_?";
	char string1_3[21] = "IsThisACamelString ?";
	char string1_4[20] = "Itwilleraseallspace";
	char string1_5[13] = "TEST IS OK !";
	char string1_6[41] = "delete the following number : 0123456789";
	char string1_7[26] = "123456Quarante-deux123456";
	char string1_8[18] = "222H3LP M3E ! #42";
	char string1_9[13] = "007H4C3R?007";
	char string1_10[16] = "What day is it?";
                   
	int c1 = 'l';                      
	int c2 = 'h';                      
	int c3 = 'T';                      
	int c4 = 'l';                      
	int c5 = 'S';                      
	int c6 = 't';                      
	int c7 = '3';                      
	int c8 = '3';                      
	int c9 = 'H';                      
	int c10 = 'a';                      

	size_t len_test1 = 12;
	size_t len_test2 = 5; 
	size_t len_test3 = 8;             
	size_t len_test4 = 10;
	size_t len_test5 = 5;
	size_t len_test6 = 12;
	size_t len_test7 = 6;
	size_t len_test8 = 16;
	size_t len_test9 = 10;
	size_t len_test10 = 9;

	void *result1 = ft_memchr(string1_1, c1, len_test1);
	void *result2 = ft_memchr(string1_2, c2, len_test2);
	void *result3 = ft_memchr(string1_3, c3, len_test3);
	void *result4 = ft_memchr(string1_4, c4, len_test4);
	void *result5 = ft_memchr(string1_5, c5, len_test5);
	void *result6 = ft_memchr(string1_6, c6, len_test6);
	void *result7 = ft_memchr(string1_7, c7, len_test7);
	void *result8 = ft_memchr(string1_8, c8, len_test8);
	void *result9 = ft_memchr(string1_9, c9, len_test9);
	void *result10 = ft_memchr(string1_10, c10, len_test10);
    
	//TEST1  
	printf("%s\n", (char *)result1);
	//TEST2
	printf("%s\n", (char *)result2);
	//TEST3
	printf("%s\n", (char *)result3);
	//TEST4
	printf("%s\n", (char *)result4);
	//TEST5
	printf("%s\n", (char *)result5);
	//TEST6
	printf("%s\n", (char *)result6);
	//TEST7
	printf("%s\n", (char *)result7);
	//TEST8
	printf("%s\n", (char *)result8);
	//TEST9
	printf("%s\n", (char *)result9);
	//TEST10
	printf("%s\n", (char *)result10);
	return (0);
}

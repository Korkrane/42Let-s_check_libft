#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *ft_calloc(size_t nmemb, size_t size);

int main(void)
{
	size_t nmemb1 = 5;
	size_t size1 = 1;
	void *real1 = NULL;
	void *test1 = NULL;
	char tmp1[size1 * nmemb1];
	real1 = calloc(nmemb1, size1);
	test1 = ft_calloc(nmemb1, size1);
	memcpy(tmp1, real1, size1 * nmemb1);
	free(real1);
	if(memcmp(tmp1, test1, size1) == 0)
		printf("test1 : ok\n");
	else 
		printf("test1 : ko\n");
	free(test1);
	
	size_t nmemb2 = 16;
	size_t size2 = 4;
	void *real2 = NULL;
	void *test2 = NULL;
	char tmp2[size2 * nmemb2];
	real2 = calloc(nmemb2, size2);
	test2 = ft_calloc(nmemb2, size2);
	memcpy(tmp2, real2, size2 * nmemb2);
	free(real2);
	if(memcmp(tmp2, test2, size2) == 0)
		printf("test2 : ok\n");
	else 
		printf("test2 : ko\n");
	free(test2);
	
	size_t nmemb3 = 5;
	size_t size3 = 4;
	void *real3 = NULL;
	void *test3 = NULL;
	char tmp3[size3 * nmemb3];
	real3 = calloc(nmemb3, size3);
	test3 = ft_calloc(nmemb3, size3);
	memcpy(tmp3, real3, size3 * nmemb3);
	free(real3);
	if(memcmp(tmp3, test3, size3) == 0)
		printf("test3 : ok\n");
	else 
		printf("test3 : ko\n");
	free(test3);
	
	size_t nmemb4 = 8;
	size_t size4 = 4;
	void *real4 = NULL;
	void *test4 = NULL;
	char tmp4[size4 * nmemb4];
	real4 = calloc(nmemb4, size4);
	test4 = ft_calloc(nmemb4, size4);
	memcpy(tmp4, real1, size4 * nmemb4);
	free(real4);
	if(memcmp(tmp4, test4, size4) == 0)
		printf("test4 : ok\n");
	else 
		printf("test4 : ko\n");
	free(test4);
	
	size_t nmemb5 = 5;
	size_t size5 = 3;
	void *real5 = NULL;
	void *test5 = NULL;
	char tmp5[size5 * nmemb5];
	real5 = calloc(nmemb5, size5);
	test5 = ft_calloc(nmemb5, size5);
	memcpy(tmp5, real5, size5 * nmemb5);
	free(real5);
	if(memcmp(tmp5, test5, size5) == 0)
		printf("test5 : ok\n");
	else 
		printf("test5 : ko\n");
	free(test5);

	size_t nmemb6 = 15;
	size_t size6 = 2;
	void *real6 = NULL;
	void *test6 = NULL;
	char tmp6[size6 * nmemb6];
	real6 = calloc(nmemb6, size6);
	test6 = ft_calloc(nmemb6, size6);
	memcpy(tmp6, real6, size6 * nmemb6);
	free(real6);
	if(memcmp(tmp6, test6, size6) == 0)
		printf("test6 : ok\n");
	else 
		printf("test6 : ko\n");
	free(test6);

	size_t nmemb7 = 8;
	size_t size7 = 1;
	void *real7 = NULL;
	void *test7 = NULL;
	char tmp7[size7 * nmemb7];
	real7 = calloc(nmemb7, size7);
	test7 = ft_calloc(nmemb7, size7);
	memcpy(tmp7, real7, size7 * nmemb7);
	free(real7);
	if(memcmp(tmp7, test7, size7) == 0)
		printf("test7 : ok\n");
	else 
		printf("test7 : ko\n");
	free(test7);

	size_t nmemb8 = 56;
	size_t size8 = 4;
	void *real8 = NULL;
	void *test8 = NULL;
	char tmp8[size8 * nmemb8];
	real8 = calloc(nmemb8, size8);
	test8 = ft_calloc(nmemb8, size8);
	memcpy(tmp8, real8, size8 * nmemb8);
	free(real8);
	if(memcmp(tmp8, test8, size8) == 0)
		printf("test8 : ok\n");
	else 
		printf("test8 : ko\n");
	free(test8);
	
	size_t nmemb9 = 25;
	size_t size9 = 2;
	void *real9 = NULL;
	void *test9 = NULL;
	char tmp9[size9 * nmemb9];
	real9 = calloc(nmemb9, size9);
	test9 = ft_calloc(nmemb9, size9);
	memcpy(tmp9, real9, size9 * nmemb9);
	free(real9);
	if(memcmp(tmp9, test9, size9) == 0)
		printf("test9 : ok\n");
	else 
		printf("test9 : ko\n");
	free(test9);

	size_t nmemb10 = 455;
	size_t size10 = 1;
	void *real10 = NULL;
	void *test10 = NULL;
	char tmp10[size10 * nmemb10];
	real10 = calloc(nmemb10, size10);
	test10 = ft_calloc(nmemb10, size10);
	memcpy(tmp10, real10, size10 * nmemb10);
	free(real10);
	if(memcmp(tmp10, test10, size10) == 0)
		printf("test10 : ok\n");
	else 
		printf("test10 : ko\n");
	free(test10);
	return (0);
}

#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[20] = "abcd";
	char arr2[5] = "bcda";	
	strncat(arr1, arr1, 4);
	strstr(arr1,arr2);
	printf("%s",strstr(arr1,arr2));	
	return 0;
}

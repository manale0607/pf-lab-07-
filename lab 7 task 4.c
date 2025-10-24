#include<stdio.h>
int main()
{
	char str[20];
	printf("\n enter the elements of the string:");
	scanf("%[^1-9]",str);
	printf("\n the entered string is:%s",str);
	return 0;
}

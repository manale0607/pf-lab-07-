#include<stdio.h>
int main()
{
	int str[10],a;
	int i;
	printf("enter the number of elements:\n");
	scanf("%d",&a);
	for(i=0;i<a;i++)
	{
			printf("\n enter the elements:");
			scanf("%d",&str[i]);
	}
	printf("numbers in reverse order:\n");
	for(i=a-1;i>=0;i--)
	{
		printf("%d",str[i]);
		printf("\n");
	}
	return 0;
}

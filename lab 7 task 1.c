#include<stdio.h>
int main()
{
	int str[5],sum=0,i;
	printf("enter the array:\n");
	for(i=1;i<5;i++)
	{
		
		scanf("%d", &str[i]);
		sum=sum+str[i];
	}
	printf("the total sum is:%d",sum);
	return 0;
}

#include<stdio.h>
int main()
{
	int b,i,array[10]={2,4,1,6,9,3,5,8,5,1};
	printf("\n enter the array character you want:");
	scanf("%d",&b);
	for(i=0;i<=10;i++)
	{
		if(array[i]==b)
		{
		  printf("\n the number is on the index: %d",i);
		  break;
	    }
		else 
		{
		  printf("\n -1");
	    }
	}
	return 0;
}

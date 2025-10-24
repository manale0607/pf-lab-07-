#include<stdio.h>
int main(){
	char str[100];
	int i,count = 0;
	printf("Enter a String: ");
	scanf("%[^\n]",&str);
	for (i = 0;str[i] != '\0'; i++){
		if (str[i] == ' '){
			count++;
		}
	}
	printf("Total Whitespaces counts are: %d",count);	
	return 0;
}


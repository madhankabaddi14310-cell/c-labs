#include<stdio.h>  

int main(){
	char ch;
	int lines;
	int i,j;
	printf("enter a character to print:");
	scanf("%c",&ch);
	
	printf("enter number of lines:");
	scanf("%d",&lines);
	
	printf("\npattern:\n");
	
	for(i=1;i<=lines;i++){
		for(j=1;j<=i;j++)
		{
		printf("%c",ch);
	}
	
			printf("\n");
		}
			return 0;
	}
 


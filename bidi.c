#include<stdio.h>
#include<conio.h>

int main(){
	
	int matriz[2][2];
	int tabla[2][2];
	int i,j;
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Digite un numero[%i][%i]:",i+1,j+1);
			scanf("%d",&matriz[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d",matriz[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n");
	
	printf("NUEVA MATRIZ......\n");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			tabla[i][j]=matriz[i][j];
			printf("%d",tabla[i][j]);
		}
		printf("\n");
	}
	
	
}

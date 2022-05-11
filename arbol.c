#include<stdio.h>
#include<conio.h>

main()

{
	int i,N;
	
	printf("Cuantas filas quiere:");
	scanf("%d",&N);
	
	for(i=0;i<=N;i++)
	{
		printf("*");
		printf("\n");
	}

	getch();
}

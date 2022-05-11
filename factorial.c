#include<stdio.h>
#include<conio.h>

main()
{
	int n,i,suma=0,factorial=1;
	int facto;
	
	printf("Digite los numeros: ");
	scanf("%d",&n);
	
	for(i=0;i<=n;i++)
	{
		facto=factorial*i;
		suma=suma+facto;
	}
	
	printf("La suma es %d",suma);
	
	getch();
}

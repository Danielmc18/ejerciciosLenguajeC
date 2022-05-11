#include<stdio.h>
#include<conio.h>

main()
{
	int i,n;
	int suma=0;
	int numero_par=0;
	
	printf("Cuantos numeros quiere evaluar: ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		if(i%2==0)
		{
			numero_par=numero_par+i;	
		}
		printf("%d",numero_par);
	}
	suma=suma+numero_par;
	printf("\nLa suma de los pares es: %d",suma);
	getch();
}

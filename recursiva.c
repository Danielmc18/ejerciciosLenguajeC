#include<stdio.h>
#include<conio.h>

int imprimir(numero,final);

int final=1;
main()
{
	int numero,i;
	
	printf("Digite el numero: ");
	scanf("%d",&numero);
	
	for(i=1;i<=numero;i++)
	{
		printf("%d",imprimir(i));
	}
	return 0;
}

int imprimir(N,final)
{
	if(N<final)
	{
		return N;
	}
	else
	{
		imprimir(N-1);
	}
}


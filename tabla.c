/*Programa que lee un numero entero y genera su tabla*/
#include<stdio.h>
#include<conio.h>

int tabla(int num,int i,int resultado);

main()
{
	int num,i,resultado;
	printf("Ingresa un numero entero: ");
	scanf("%d",&num);
	
	tabla(num,i,resultado);

}

int tabla(num,i,resultado)
{
	i=1;
	while(i<=20)
	{
		resultado=num*i;
		printf("%d x %d=%d\n",num,i,resultado);
		i=i+1;
	}	
	return resultado;
}

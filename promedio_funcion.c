#include<stdio.h>
#include<conio.h>

//parametros donde dices "que funciones usare?"
int promedio(sumar);
int sumar(a,b);

int main()
{
	int a,b;
	int suma=0;
	int prom=0;
	
	//digitas los valores
	printf("Digite el 1er numero: ");
	scanf("%d",&a);
	printf("Digite el 2do numero: ");
	scanf("%d",&b);
	
	//suma es igual a la funcion donde ya se realizo el proceimiento
	suma=sumar(a,b);
	printf("%d",suma);
	
	//prom es igual a la funcion donde ya se realizo la division
	prom=promedio(suma);
	printf("\n%d",prom);	
	return 0;
}

int sumar(int a,int b)
{
	int suma=0;
	suma=a+b;
	
	return suma;
}

int promedio(suma)
{
	int prom=0;
	
	prom=suma/2;
	
	return prom;
}

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	
	srand(time(NULL));
	int i;
	int arreglo[100];
	int p=0;
	int imp=0;
	int arreglo_pares[p];
	int arreglo_impares[imp];
	
	for(i=0;i<100;i++)
	{
		arreglo[i]= 1 + rand() % (1000 +1 - 1);
	}
	for(i=0;i<100;i++)
	{
		printf("\n%i.-[%i] ",i+1,arreglo[i]);
	}
	
	printf("\n//////////////////////////////////////////////////////");
	
	for(i=0;i<100;i++)
	{
		if(arreglo[i]%2==0)
		{
			arreglo_pares[p]=arreglo[i];
			p++;
		}
		else
		{
			arreglo_impares[imp]=arreglo[i];
			imp++;
		}
	}
	
	printf("\n\nARREGLO DE PARES\n\n");
	
	for(i=0;i<p;i++)
	{
	   printf("\n%i.-[%i] ",i+1,arreglo_pares[i]);
	}
	
	printf("\n\nARREGLO DE IMPARES\n\n");
	
	for(i=0;i<imp;i++)
	{
	  printf("\n%i.-[%i] ",i+1,arreglo_impares[i]);
	}
	
	
	
	getch();
}

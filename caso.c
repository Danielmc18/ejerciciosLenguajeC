#include<stdio.h>
#include<conio.h>

main()
{
	int numero,opcion;
	int cubo=0;
	
	printf("/tMenu de Opciones");
	printf("\n 1 hacer cubo un numero ");
	printf("\n 2 saber si es par o impar");
	printf("\n 3 salir");
	
	printf("\nQue opcion quiere realizar");
	scanf("%d",&opcion);
	
	switch(opcion)
	{
		case 1:printf("\nIngrese un numero");
	    scanf("%d",&numero);
		cubo=numero*numero*numero;
		printf("El numero al cubo es: %d",cubo);
		break;  
		
		case 2:
		printf("Ingrese un numero");
	    scanf("%d",&numero);
	    if(numero%2==0)
	    {
	    	printf("El numero es par");
		}
		else
		{
			printf("El numero es impar");
		}
		break;
		
		case 3: break;
	}
	return 0;
}

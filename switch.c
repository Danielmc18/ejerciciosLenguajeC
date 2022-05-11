#include<stdio.h>
#include<conio.h>

main()
{
	char coche;
	
	printf("Que tipo de coche desea comprar: ");
	scanf("%c",&coche);
	
	switch(coche)
	{
		case't':
		printf("Usted debe pagar $500 pesos por pasaje");
		break;
		case'a':
		printf("Usted debe pagar $3000 pesos por el pasaje");
		break;	
		case'm':
		printf("Usted debe pagar $300 pesos ");
		break;
		
		default: ("Vehiculo no autorizado ");
	}
	return 0;
}

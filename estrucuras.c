#include<conio.h>
#include<stdio.h>

struct alumno
{
	char nombre[20];
	int  edad;
	float promedio;
}alumno1,alumno2,alumno3;

main()
{
	printf("Digite su nombre: ");
	gets(alumno1.nombre);
	printf("Digite su edad: ");
	scanf("%d",&alumno1.edad);
	printf("Digite su promedio: ");
	scanf("%f",&alumno1.promedio);
	fflush(stdin);
	printf("\n");
	
	printf("Digite su nombre: ");
	gets(alumno2.nombre);
	printf("Digite su edad: ");
	scanf("%d",&alumno2.edad);
	printf("Digite su promedio: ");
	scanf("%f",&alumno2.promedio);
	fflush(stdin);
	printf("\n");
	
	printf("Digite su nombre: ");
	gets(alumno3.nombre);
	printf("Digite su edad: ");
	scanf("%d",&alumno3.edad);
	printf("Digite su promedio: ");
	scanf("%f",&alumno3.promedio);
	fflush(stdin);
	printf("\n");
	
	
	printf("////////Lista de alumnos///////");
	
	printf("\nEl nombre del alumno 1 es: %s ",alumno1.nombre);
	printf("\nLa edad del alumno 1 es: %d",alumno1.edad);
	printf("\nEl promedio del alumno 1 es: %.2f",alumno1.promedio);
	printf("\n");
	printf("\nEl nombre del alumno 2 es: %s",alumno2.nombre);
	printf("\nLa edad del alumno 2 es: %d",alumno2.edad);
	printf("\nEl promedio del alumno 2 es: %.2f",alumno2.promedio);
	printf("\n");
	printf("\nEl nombre del alumno 3 es: %s",alumno3.nombre);
	printf("\nLa edad del alumno 3 es: %d",alumno3.edad);
	printf("\nEl promedio del alumno 3 es: %.2f",alumno3.promedio);
	printf("\n");
	if ( alumno1.promedio>= alumno2.promedio && alumno1.promedio >= alumno3.promedio )
	{
	   printf( "\nEl promedio del alumno 1 fue el mayor con %.2f",alumno1.promedio );
	} 
    else
    {
    	if (alumno2.promedio>alumno3.promedio )
    	{
    	 printf( "\nEl promedio del alumno 2 fue el mayor con %.2f",alumno2.promedio );
		}
		else
		{
		  printf( "\nEl promedio del alumno 3 fue el mayor con %.2f",alumno3.promedio );
		}  
	}
	getch();
}

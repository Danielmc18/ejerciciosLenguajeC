#include<stdio.h>
#include<conio.h>

#define TAM 40

int main(){
	char nombre1[TAM];
	char nombre2[TAM];
	char aux[TAM];
	
	printf("Digite su nombre:");
	gets(nombre1);
	printf("Digite su nombre: ");
	gets(nombre2);
	
	strcpy(aux,nombre1); //salvaguardamos en 'auxiliar' el nombre que contiene 'nombre1'
    strcpy(nombre1,nombre2); //ahora 'nombre1' recibe el nombre contenido en 'nombre2' 
    strcpy(nombre2,aux); //y 'nombre2' recibe el contenido de 'nombre1' que fue salvaguardado en 'auxiliar' completandose asi el intercambio

    printf("\nIntercambio\n");
    printf("nombre1: %s\n",nombre1);
    printf("nombre2: %s",nombre2);
    
    getch();
}

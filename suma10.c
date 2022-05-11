#include<stdio.h>
#include<conio.h>

main()
{
       int suma=0,numero,multiplicar=1; 
       int contador = 1;
       
	   printf("Digite el numero: ");
       scanf("%d",&numero);

       while (contador <= 10 )
       {
       	 
       	 if(numero>10)
       	 {
       	 	suma=suma+contador;
		 }
		 else
		 {
		 	multiplicar=multiplicar*contador;
		 }
	     contador ++;
       }
       printf("\nLa suma es: %d",suma);
       printf("\nLa multi es: %d",multiplicar);
       return 0;
}

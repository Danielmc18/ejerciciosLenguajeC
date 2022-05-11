#include<stdio.h>
#include<conio.h>

main()
{
	int n,m,i,pares=0;

	//la n es donde va a empezar el ciclo por eso no se inicia desde 1 como anteriormente 
	printf("Digite desde donde quiere comenzar:");
	scanf("%d",&n);
	
	//esre es hasta donde quieres llegar
	printf("Digite hasta donde quiere terminar: ");
	scanf("%d",&m);
	
    i=n;
    while(i<=m)
	{
		if(i%2==0)
		{
			pares=pares+i;
		}
		i++;
    }
    printf("La suma de los pares es: %d",pares);
	getch();
}

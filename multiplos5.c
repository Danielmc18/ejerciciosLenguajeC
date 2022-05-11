#include<stdio.h>
#include<conio.h>

main()
{
	int i,n;
	
	printf("Digite los numeros que quiere evaluar: ");
	scanf("%d",&n);
	
	i=1;
	
	while(i<=n)
	{
		if(i%5==0)
		{
			printf("%d\n",i);
		}
		i++;
	}
	getch();
}

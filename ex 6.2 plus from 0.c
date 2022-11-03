#include<stdio.h>
#include<conio.h>

main()
{
	int i, last;
	i = 0;
	printf("Enter the number to plus from 0 :");
	scanf("%d",&last);
	while(i <= last)
	{
		printf("%d \n",i);
		i++;
	}
	getch();
	return 0;
}

#include<stdio.h>

main()
{
	int i,n;
	float sum;
	printf("Enter the number to find value :");
	scanf("%d",&n);
	
	for (i=1;i<=n;i++)
	{
		printf("%d",1/n);
		sum+=n;
	}
	printf("The summation is %.2f",1/sum);
}

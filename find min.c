#include<stdio.h>
main()
{
	int a,b,min;
	printf("enter value a :");
	scanf("%d",&a);
	printf("enter value b :");
	scanf("%d",&b);
	if(a<b)
	{
		min=a;
	}
	else
	{
		min=b;
	}
	printf("min(%d,%d)= %d",a,b,min);
}

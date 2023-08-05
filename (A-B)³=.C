#include<stdio.h>
#include<conio.h>

main()

{
  int a,b,sum;

 
	printf("Enter value of A = ");
	scanf("%d",&a);

	printf("Enter value of B = ");
	scanf("%d",&b);

	sum=(a*a*a) - (b*b*b) - ((3*a*b)*(a+b));


	printf("a - b cube = %d",sum);

 
}


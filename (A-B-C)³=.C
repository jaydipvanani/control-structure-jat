#include<stdio.h>
#include<conio.h>

main()

{

  float a,b,c,sum;

  

	printf("Enter value of A = ");
	scanf("%f",&a);

	printf("Enter value of B = ");
	scanf("%f",&b);

	printf("Enter value of c = ");
	scanf("%f",&c);

	sum= (a*a*a) - (b*b*b) - (c*c*c) - (3*(a+b))+(3*(b+c))+(3*(c+a));


	printf("a + b + c cube = %.2f",sum);

  
}

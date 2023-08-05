#include<stdio.h>
#include<conio.h>

main()

{
  int a,b,sum;

  clrscr();

	printf("Enter value of A = ");
	scanf("%d",&a);

	printf("Enter value of B = ");
	scanf("%d",&b);

	sum=(a*a*a) + ((3*a*b)*(a+b)) + (b*b*b);


	printf("a + b cube = %.2d",sum);

  getch();
}
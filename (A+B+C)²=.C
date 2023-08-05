#include<stdio.h>
#include<conio.h>

main()

{
  int a,b,c,sum;

  clrscr();

	printf("Enter value of A = ");
	scanf("%d",&a);

	printf("Enter value of B = ");
	scanf("%d",&b);

	printf("Enter value of c = ");
	scanf("%d",&c);

	sum= (a*a) + (b*b) + (c*c) + (2*(a*b)+(b*c)+(c*a));


	printf("a + b + c square = %.2d",sum);

  getch();
}
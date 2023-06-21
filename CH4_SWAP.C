#include<stdio.h>
#include<conio.h>

void main()

{

  int a,b,c;
  clrscr();
  printf("Enter of Value A =");
  scanf("%d",&a);
  printf("Enter Of Value B =");
  scanf("%d",&b);
  c=a;
  a=b;
  b=c;
  printf("Swapping Value A = %d\n",a);
  printf("Swapping Value B = %d",b);
  getch();


}
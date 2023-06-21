#include<stdio.h>
#include<conio.h>

void main()

{
  clrscr();
  int x,y;
  printf("Enter of Value X =");
  scanf("%d",&x);
  printf("Enter of Value Y =");
  scanf("%d",&y);
  x=x+y;
  y=x-y;
  x=x-y;
  printf("Swapping Of two Ch. Value X = %d\n",x);
  printf("Swapping of two Ch. Value Y = %d",y);
  getch();

}
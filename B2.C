#include<stdio.h>
#include<conio.h>
void main(){
   int l,b,area;
   clrscr();

   printf("Enter length of rectangle:");
   scanf("%d",&l);

   printf("enter breadth of rectangle:");
   scanf("%d",&b);

   area=l*b;

   printf("Area of rectangle = %d",area);

getch();
}


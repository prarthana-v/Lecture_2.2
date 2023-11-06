#include<stdio.h>
#include<conio.h>
void main(){
   float pi=3.14;
   int r;
   float area;
   clrscr();

   printf("Enter the value of radius:");
   scanf("%d",&r);

   area=pi*r*r;

   printf("Area of circle = %f",area);

getch();
}
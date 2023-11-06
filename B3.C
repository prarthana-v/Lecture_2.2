#include<stdio.h>
#include<conio.h>
void main(){
  int b,h;
  float area;

  clrscr();

  printf("Enter Base of tringle:");
  scanf("%d",&b);

  printf("Enter Height of triangle:");
  scanf("%d",&h);

  area=(b*h)/2;

  printf("Area of triangle = %.2f",area);

getch();
}
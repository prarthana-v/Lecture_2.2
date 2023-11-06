#include<stdio.h>
#include<conio.h>
void main(){
  int p,r,t;
  int si;

  clrscr();

  printf("Enter principal amount:");
  scanf("%d",&p);

  printf("Enter Rate per Annum:");
  scanf("%d",&r);

  printf("Enter Time(Years):");
  scanf("%d",&t);

  si=(p*r*t)/100;

  printf("Simple Interest = %d",si);

getch();
}
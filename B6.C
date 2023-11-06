#include<stdio.h>
#include<conio.h>
void main(){
   int s1,s2,s3,s4,s5,s6,s7,s8;
   float avg,pr;

   clrscr();

   printf("Enter the marks of Maths subject:");
   scanf("%d",&s1);

   printf("Enter the marks of science subject:");
   scanf("%d",&s2);

   printf("Enter the marks of English subject:");
   scanf("%d",&s3);

   printf("Enter the marks of Hindi subject:");
   scanf("%d",&s4);

   printf("Enter the marks of Gujarati subject:");
   scanf("%d",&s5);

   printf("Enter the marks of social-science subject:");
   scanf("%d",&s6);

   printf("Enter the marks of Sanskrit subject:");
   scanf("%d",&s7);

   printf("Enter the marks of Drawing subject:");
   scanf("%d",&s8);

   avg=(s1+s2+s3+s4+s5+s6+s7+s8)/8;
   pr=(avg*100)/800;

   printf("Average of all Subjects = %.2f\n",avg);
   printf("Percentage = %.2f",pr);

   getch();
}
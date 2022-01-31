#include<stdio.h>
int main()
{
  int number;

      printf("enter an inetger: ");
      scanf("%d",&number);

   //true if number is less than0
   if(number<0)
   {
     printf("you entered%d.\n",number);
   }   
   printf("the if statement is easy.");
   return 0;
}
#include <stdio.h>
#define size 10
#include <string.h>
int top=-1;char s[20];
void Push(char item)
{
   if(top==size-1)
   {
      printf("STACK  OVERFLOW!!!");
   }
   else
   {
      top+=1;
      s[top]=item;
   }
}
int Pop()
{  char item;
   item=s[top];
   top--;
   return item;
}
void main()
{
   int p,i,len=0,flag=0,j;
   char str[20],item;
   printf("Enter the string: ");
   scanf("%s",str);
   const a=strlen(str);
   for(i=0;i<=a/2;i++)
   {
      Push(str[i]);
   }
   for(j=a/2;j<a;j++)
   {  item=Pop();
      if(str[j]!=item)
      {
         flag=1;
      }
   }
   if(flag==1)
   {
      printf("THE GIVEN STRING IS NOT A PALINDROME!!!!\n");
   }
   else if(flag==0)
   {
      printf("THE GIVEN STRING IS A PALINDROME!!!!\n");
   }
}

#include <stdio.h>

struct polynomial
{
   int coeff;
   int exp;
}p[10],q[10],r[10];

void main()
{
   int m,n,i,j,k,coeff,exp;
   printf("Enter the number of terms in first and second polynomial: ");
   scanf("%d %d",&m,&n);
   printf("Enter the First Polynomial\n ");
   for(i=0;i<m;i++)
   {
      printf("Enter the coefficient and exponent: ");
      scanf("%d %d",&coeff,&exp);
      p[i].coeff=coeff;
      p[i].exp=exp;
   }
   printf("Enter the Second Polynomial\n");
   for(j=0;j<n;j++)
   {
      printf("Enter the coefficient and exponent: ");
      scanf("%d %d",&coeff,&exp);
      q[j].coeff=coeff;
      q[j].exp=exp;
   }
   i=0;j=0;k=0;
   while(i<m && j<n)
   {
      if(p[i].exp==q[i].exp)
      {
         r[k].coeff=p[i].coeff+q[j].coeff;
         r[k].exp=p[i].exp;
         i++;j++;k++;
      }
      else if(p[i].exp>q[j].exp)
      {
         r[k].coeff=p[i].coeff;
         r[k].exp=p[i].exp;
         i++;k++;
      }
      else
      {
         r[k].coeff=q[j].coeff;
         r[k].exp=q[i].exp;
         j++;k++;
      }
   }
   while(i<m)
   {
      r[k].coeff=p[i].coeff;
      r[k].exp=p[i].exp;
      i++;k++;
   }
   while(j<n)
   {
      r[k].coeff=q[j].coeff;
      r[k].exp=q[i].exp;
      j++;k++;
   }

   printf("First Polynomial: ");
   for(i=0;i<m;i++)
   {
      if(i==m-1)
      {
         printf("%dx^%d",p[i].coeff,p[i].exp);
      }
      else
      {
         printf("%dx^%d+",p[i].coeff,p[i].exp);
      }
   }
   printf("\n");
   printf("Second Polynomial: ");
   for(j=0;j<n;j++)
   {
      if(j==n-1)
      {
         printf("%dx^%d",q[j].coeff,q[j].exp);
      }
      else
      {
         printf("%dx^%d+",q[j].coeff,q[j].exp);
      }
   }
   printf("\n");
   printf("SUM: ");
   for(i=0;i<k;i++)
   {
      if(i==k-1)
      {
         printf("%dx^%d",r[i].coeff,r[i].exp); 
      }
      else
      {
         printf("%dx^%d+",r[i].coeff,r[i].exp);
      }
   }
   printf("\n");
}

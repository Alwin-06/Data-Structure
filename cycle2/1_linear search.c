#include <stdio.h>
void main()
{
   int a[10],i,n,flag=0,key;
   printf("Enter number of elements in array: ");
   scanf("%d",&n);
   printf("Enter elements: ");
   for(i=0;i<n;i++)
   {
      scanf("%d",&a[i]);
   }
   printf("Enter number to be searched: ");
   scanf("%d",&key);
   for(i=0;i<n;i++)
   {
      if(a[i]==key)
      {
         printf("The element %d is present at %d\n",key,i+1);
         flag=1;
      }
   }
   if(flag==0)
   {
      printf("The Element %d is not present in the array\n",key);
   }
}

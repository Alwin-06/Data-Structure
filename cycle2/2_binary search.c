#include<stdio.h>
void main()
{
   int a[10],i,j,n,temp,key,top,bot,mid;
   printf("Enter number of elements in array: ");
   scanf("%d",&n);
   printf("Enter elements into array: ");
   for(i=0;i<n;i++)
   {
      scanf("%d",&a[i]);
   }
   for(i=0;i<n-1;i++)
   {
      for(j=i+1;j<n;j++)
      {
         if(a[i]>a[j])
         {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
         }
      }
   }
   printf("The array in sorted order is: ");
   for(i=0;i<n;i++)
   {
      printf("%d ",a[i]);
   }
   printf("\nEnter number to be searched: ");
   scanf("%d",&key);
   top=0;
   bot=n-1;
   while(top<=bot)
   {
      mid=(top+bot)/2;
      if(a[mid]==key)
      {
         printf("The number %d is found at %d\n",key,mid+1);
         break;
      }
      else if(key<a[mid])
      {
         bot=mid-1;
      }
      else
      {
         top=mid+1;
      }
   }
   if(top>bot)
   {
      printf("The number %d is not found in the array!!!\n",key);
   }
}
